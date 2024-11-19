func.func @triangle(%arg0: i32) -> i32 attributes {llvm.linkage = #llvm.linkage<external>} {
  %c1_i32 = arith.constant 1 : i32
  %c1 = arith.constant 1 : index
  %c0_i32 = arith.constant 0 : i32
  %0 = arith.addi %arg0, %c1_i32 : i32
  %1 = arith.index_cast %0 : i32 to index
  %2 = scf.for %arg1 = %c1 to %1 step %c1 iter_args(%arg2 = %c0_i32) -> (i32) {
    %3 = arith.index_cast %arg1 : index to i32
    %4 = arith.addi %arg2, %3 : i32
    scf.yield %4 : i32
  }
  return %2 : i32
}

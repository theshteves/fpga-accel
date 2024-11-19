module {
  func.func @triangle(%arg0: i32) -> i32 attributes {llvm.linkage = #llvm.linkage<external>} {
    %c1_i32 = arith.constant 1 : i32
    %c1 = arith.constant 1 : index
    %c0_i32 = arith.constant 0 : i32
    %0 = arith.addi %arg0, %c1_i32 : i32
    %1 = arith.index_cast %0 : i32 to index
    %2:2 = scf.while (%arg1 = %c1, %arg2 = %c0_i32) : (index, i32) -> (index, i32) {
      %3 = arith.cmpi slt, %arg1, %1 : index
      scf.condition(%3) %arg1, %arg2 : index, i32
    } do {
    ^bb0(%arg1: index, %arg2: i32):
      %3 = arith.addi %arg1, %c1 : index
      %4 = arith.index_cast %arg1 : index to i32
      %5 = arith.addi %arg2, %4 : i32
      scf.yield %3, %5 : index, i32
    }
    return %2#1 : i32
  }
}


#loop_annotation = #llvm.loop_annotation<mustProgress = true>
module attributes {dlti.dl_spec = #dlti.dl_spec<#dlti.dl_entry<i64, dense<64> : vector<2xi64>>, #dlti.dl_entry<!llvm.ptr<271>, dense<32> : vector<4xi64>>, #dlti.dl_entry<!llvm.ptr<272>, dense<64> : vector<4xi64>>, #dlti.dl_entry<f64, dense<64> : vector<2xi64>>, #dlti.dl_entry<!llvm.ptr<270>, dense<32> : vector<4xi64>>, #dlti.dl_entry<f128, dense<128> : vector<2xi64>>, #dlti.dl_entry<f16, dense<16> : vector<2xi64>>, #dlti.dl_entry<i32, dense<32> : vector<2xi64>>, #dlti.dl_entry<i16, dense<16> : vector<2xi64>>, #dlti.dl_entry<i8, dense<8> : vector<2xi64>>, #dlti.dl_entry<i1, dense<8> : vector<2xi64>>, #dlti.dl_entry<!llvm.ptr, dense<64> : vector<4xi64>>, #dlti.dl_entry<f80, dense<128> : vector<2xi64>>, #dlti.dl_entry<"dlti.endianness", "little">, #dlti.dl_entry<"dlti.stack_alignment", 128 : i64>>, llvm.ident = "Apple clang version 16.0.0 (clang-1600.0.26.3)"} {
  llvm.func @triangle(%arg0: i32 {llvm.noundef}) -> i32 attributes {frame_pointer = #llvm.framePointerKind<all>, no_inline, no_unwind, optimize_none, passthrough = ["ssp", ["uwtable", "2"], "darwin-stkchk-strong-link", ["min-legal-vector-width", "0"], ["no-trapping-math", "true"], ["probe-stack", "___chkstk_darwin"], ["stack-protector-buffer-size", "8"], ["target-cpu", "penryn"]], target_cpu = "penryn", target_features = #llvm.target_features<["+cmov", "+cx16", "+cx8", "+fxsr", "+mmx", "+sahf", "+sse", "+sse2", "+sse3", "+sse4.1", "+ssse3", "+x87"]>, tune_cpu = "generic"} {
    %0 = llvm.mlir.constant(1 : i32) : i32
    %1 = llvm.mlir.constant(0 : i32) : i32
    %2 = llvm.alloca %0 x i32 {alignment = 4 : i64} : (i32) -> !llvm.ptr
    %3 = llvm.alloca %0 x i32 {alignment = 4 : i64} : (i32) -> !llvm.ptr
    %4 = llvm.alloca %0 x i32 {alignment = 4 : i64} : (i32) -> !llvm.ptr
    llvm.store %arg0, %2 {alignment = 4 : i64} : i32, !llvm.ptr
    llvm.store %1, %3 {alignment = 4 : i64} : i32, !llvm.ptr
    llvm.store %0, %4 {alignment = 4 : i64} : i32, !llvm.ptr
    llvm.br ^bb1
  ^bb1:  // 2 preds: ^bb0, ^bb3
    %5 = llvm.load %4 {alignment = 4 : i64} : !llvm.ptr -> i32
    %6 = llvm.load %2 {alignment = 4 : i64} : !llvm.ptr -> i32
    %7 = llvm.icmp "sle" %5, %6 : i32
    llvm.cond_br %7, ^bb2, ^bb4
  ^bb2:  // pred: ^bb1
    %8 = llvm.load %4 {alignment = 4 : i64} : !llvm.ptr -> i32
    %9 = llvm.load %3 {alignment = 4 : i64} : !llvm.ptr -> i32
    %10 = llvm.add %9, %8 overflow<nsw> : i32
    llvm.store %10, %3 {alignment = 4 : i64} : i32, !llvm.ptr
    llvm.br ^bb3
  ^bb3:  // pred: ^bb2
    %11 = llvm.load %4 {alignment = 4 : i64} : !llvm.ptr -> i32
    %12 = llvm.add %11, %0 overflow<nsw> : i32
    llvm.store %12, %4 {alignment = 4 : i64} : i32, !llvm.ptr
    llvm.br ^bb1 {loop_annotation = #loop_annotation}
  ^bb4:  // pred: ^bb1
    %13 = llvm.load %3 {alignment = 4 : i64} : !llvm.ptr -> i32
    llvm.return %13 : i32
  }
}

// Generated with `xb buildshaders`.
#if 0
; SPIR-V
; Version: 1.0
; Generator: Khronos Glslang Reference Front End; 11
; Bound: 25175
; Schema: 0
               OpCapability Shader
          %1 = OpExtInstImport "GLSL.std.450"
               OpMemoryModel Logical GLSL450
               OpEntryPoint GLCompute %5663 "main" %gl_GlobalInvocationID
               OpExecutionMode %5663 LocalSize 8 8 1
               OpDecorate %_struct_1014 Block
               OpMemberDecorate %_struct_1014 0 Offset 0
               OpMemberDecorate %_struct_1014 1 Offset 8
               OpMemberDecorate %_struct_1014 2 Offset 12
               OpDecorate %gl_GlobalInvocationID BuiltIn GlobalInvocationId
               OpDecorate %_runtimearr_v4uint ArrayStride 16
               OpDecorate %_struct_1972 BufferBlock
               OpMemberDecorate %_struct_1972 0 NonReadable
               OpMemberDecorate %_struct_1972 0 Offset 0
               OpDecorate %3271 NonReadable
               OpDecorate %3271 Binding 0
               OpDecorate %3271 DescriptorSet 0
               OpDecorate %gl_WorkGroupSize BuiltIn WorkgroupSize
       %void = OpTypeVoid
       %1282 = OpTypeFunction %void
       %uint = OpTypeInt 32 0
     %v2uint = OpTypeVector %uint 2
       %bool = OpTypeBool
     %uint_2 = OpConstant %uint 2
     %uint_1 = OpConstant %uint 1
       %1837 = OpConstantComposite %v2uint %uint_2 %uint_1
     %v2bool = OpTypeVector %bool 2
     %uint_0 = OpConstant %uint 0
       %1807 = OpConstantComposite %v2uint %uint_0 %uint_0
       %1828 = OpConstantComposite %v2uint %uint_1 %uint_1
    %uint_80 = OpConstant %uint 80
    %uint_16 = OpConstant %uint 16
       %2719 = OpConstantComposite %v2uint %uint_80 %uint_16
        %int = OpTypeInt 32 1
%_struct_1014 = OpTypeStruct %v2uint %uint %uint
%_ptr_PushConstant__struct_1014 = OpTypePointer PushConstant %_struct_1014
       %3305 = OpVariable %_ptr_PushConstant__struct_1014 PushConstant
      %int_1 = OpConstant %int 1
%_ptr_PushConstant_uint = OpTypePointer PushConstant %uint
      %int_2 = OpConstant %int 2
      %int_0 = OpConstant %int 0
  %uint_1023 = OpConstant %uint 1023
    %uint_10 = OpConstant %uint 10
     %uint_3 = OpConstant %uint 3
  %uint_4096 = OpConstant %uint 4096
    %uint_13 = OpConstant %uint 13
  %uint_2047 = OpConstant %uint 2047
    %uint_15 = OpConstant %uint 15
     %uint_4 = OpConstant %uint 4
       %1855 = OpConstantComposite %v2uint %uint_0 %uint_4
     %uint_5 = OpConstant %uint 5
%_ptr_PushConstant_v2uint = OpTypePointer PushConstant %v2uint
     %v3uint = OpTypeVector %uint 3
%_ptr_Input_v3uint = OpTypePointer Input %v3uint
%gl_GlobalInvocationID = OpVariable %_ptr_Input_v3uint Input
%_ptr_Input_uint = OpTypePointer Input %uint
       %1834 = OpConstantComposite %v2uint %uint_3 %uint_0
     %v4uint = OpTypeVector %uint 4
%_runtimearr_v4uint = OpTypeRuntimeArray %v4uint
%_struct_1972 = OpTypeStruct %_runtimearr_v4uint
%_ptr_Uniform__struct_1972 = OpTypePointer Uniform %_struct_1972
       %3271 = OpVariable %_ptr_Uniform__struct_1972 Uniform
%_ptr_Uniform_v4uint = OpTypePointer Uniform %v4uint
     %uint_8 = OpConstant %uint 8
%gl_WorkGroupSize = OpConstantComposite %v3uint %uint_8 %uint_8 %uint_1
       %1954 = OpConstantComposite %v2uint %uint_15 %uint_1
       %1870 = OpConstantComposite %v2uint %uint_3 %uint_3
    %uint_40 = OpConstant %uint 40
     %int_40 = OpConstant %int 40
    %int_n40 = OpConstant %int -40
  %uint_1280 = OpConstant %uint 1280
%uint_2621440 = OpConstant %uint 2621440
       %5663 = OpFunction %void None %1282
      %15110 = OpLabel
               OpSelectionMerge %19578 None
               OpSwitch %uint_0 %11880
      %11880 = OpLabel
      %22245 = OpAccessChain %_ptr_PushConstant_uint %3305 %int_1
      %15627 = OpLoad %uint %22245
      %22700 = OpAccessChain %_ptr_PushConstant_uint %3305 %int_2
      %20824 = OpLoad %uint %22700
      %20561 = OpBitwiseAnd %uint %15627 %uint_1023
      %20073 = OpShiftRightLogical %uint %15627 %uint_10
       %7177 = OpBitwiseAnd %uint %20073 %uint_3
      %23023 = OpBitwiseAnd %uint %15627 %uint_4096
      %20495 = OpINotEqual %bool %23023 %uint_0
       %8141 = OpShiftRightLogical %uint %15627 %uint_13
      %24990 = OpBitwiseAnd %uint %8141 %uint_2047
       %8871 = OpCompositeConstruct %v2uint %20824 %20824
       %9576 = OpShiftRightLogical %v2uint %8871 %1855
      %23379 = OpBitwiseAnd %v2uint %9576 %1954
      %16207 = OpShiftLeftLogical %v2uint %23379 %1870
      %23019 = OpIMul %v2uint %16207 %1828
      %12819 = OpShiftRightLogical %uint %20824 %uint_5
      %16204 = OpBitwiseAnd %uint %12819 %uint_2047
      %19017 = OpAccessChain %_ptr_PushConstant_v2uint %3305 %int_0
      %23788 = OpLoad %v2uint %19017
      %13183 = OpCompositeConstruct %v2uint %7177 %7177
      %21741 = OpUGreaterThanEqual %v2bool %13183 %1837
      %22612 = OpSelect %v2uint %21741 %1828 %1807
      %23890 = OpAccessChain %_ptr_Input_uint %gl_GlobalInvocationID %uint_0
      %19209 = OpLoad %uint %23890
      %20350 = OpCompositeExtract %uint %22612 0
      %15478 = OpShiftLeftLogical %uint %16204 %20350
      %15379 = OpUGreaterThanEqual %bool %19209 %15478
               OpSelectionMerge %17447 DontFlatten
               OpBranchConditional %15379 %21992 %17447
      %21992 = OpLabel
               OpBranch %19578
      %17447 = OpLabel
      %14637 = OpLoad %v3uint %gl_GlobalInvocationID
      %20690 = OpVectorShuffle %v2uint %14637 %14637 0 1
       %9909 = OpShiftLeftLogical %v2uint %20690 %1834
      %23542 = OpShiftLeftLogical %v2uint %23019 %22612
       %7525 = OpIAdd %v2uint %9909 %23542
      %25079 = OpUDiv %v2uint %7525 %2719
      %12360 = OpCompositeExtract %uint %25079 1
      %11046 = OpIMul %uint %12360 %20561
      %24665 = OpCompositeExtract %uint %25079 0
      %21536 = OpIAdd %uint %11046 %24665
       %8742 = OpIAdd %uint %24990 %21536
       %6459 = OpIMul %v2uint %25079 %2719
      %14279 = OpISub %v2uint %7525 %6459
               OpSelectionMerge %19725 None
               OpBranchConditional %20495 %10558 %19725
      %10558 = OpLabel
      %11791 = OpCompositeExtract %uint %14279 0
      %24981 = OpBitcast %int %11791
       %7841 = OpUGreaterThanEqual %bool %11791 %uint_40
      %22568 = OpSelect %int %7841 %int_n40 %int_40
      %11768 = OpIAdd %int %24981 %22568
       %8071 = OpBitcast %uint %11768
      %21574 = OpCompositeInsert %v2uint %8071 %14279 0
               OpBranch %19725
      %19725 = OpLabel
       %8537 = OpPhi %v2uint %14279 %17447 %21574 %10558
       %6671 = OpIMul %uint %8742 %uint_1280
      %13892 = OpCompositeExtract %uint %8537 1
      %15890 = OpIMul %uint %13892 %uint_80
      %24666 = OpCompositeExtract %uint %8537 0
      %21631 = OpIAdd %uint %15890 %24666
       %9093 = OpIAdd %uint %6671 %21631
       %8443 = OpUMod %uint %9093 %uint_2621440
      %16234 = OpShiftRightLogical %uint %8443 %uint_2
      %14952 = OpVectorShuffle %v4uint %23788 %23788 0 0 0 0
       %7737 = OpAccessChain %_ptr_Uniform_v4uint %3271 %int_0 %16234
               OpStore %7737 %14952
      %11457 = OpIAdd %uint %16234 %uint_1
      %25174 = OpAccessChain %_ptr_Uniform_v4uint %3271 %int_0 %11457
               OpStore %25174 %14952
               OpBranch %19578
      %19578 = OpLabel
               OpReturn
               OpFunctionEnd
#endif

const uint32_t resolve_clear_32bpp_cs[] = {
    0x07230203, 0x00010000, 0x0008000B, 0x00006257, 0x00000000, 0x00020011,
    0x00000001, 0x0006000B, 0x00000001, 0x4C534C47, 0x6474732E, 0x3035342E,
    0x00000000, 0x0003000E, 0x00000000, 0x00000001, 0x0006000F, 0x00000005,
    0x0000161F, 0x6E69616D, 0x00000000, 0x00000F48, 0x00060010, 0x0000161F,
    0x00000011, 0x00000008, 0x00000008, 0x00000001, 0x00030047, 0x000003F6,
    0x00000002, 0x00050048, 0x000003F6, 0x00000000, 0x00000023, 0x00000000,
    0x00050048, 0x000003F6, 0x00000001, 0x00000023, 0x00000008, 0x00050048,
    0x000003F6, 0x00000002, 0x00000023, 0x0000000C, 0x00040047, 0x00000F48,
    0x0000000B, 0x0000001C, 0x00040047, 0x000007DC, 0x00000006, 0x00000010,
    0x00030047, 0x000007B4, 0x00000003, 0x00040048, 0x000007B4, 0x00000000,
    0x00000019, 0x00050048, 0x000007B4, 0x00000000, 0x00000023, 0x00000000,
    0x00030047, 0x00000CC7, 0x00000019, 0x00040047, 0x00000CC7, 0x00000021,
    0x00000000, 0x00040047, 0x00000CC7, 0x00000022, 0x00000000, 0x00040047,
    0x00000AC7, 0x0000000B, 0x00000019, 0x00020013, 0x00000008, 0x00030021,
    0x00000502, 0x00000008, 0x00040015, 0x0000000B, 0x00000020, 0x00000000,
    0x00040017, 0x00000011, 0x0000000B, 0x00000002, 0x00020014, 0x00000009,
    0x0004002B, 0x0000000B, 0x00000A10, 0x00000002, 0x0004002B, 0x0000000B,
    0x00000A0D, 0x00000001, 0x0005002C, 0x00000011, 0x0000072D, 0x00000A10,
    0x00000A0D, 0x00040017, 0x0000000F, 0x00000009, 0x00000002, 0x0004002B,
    0x0000000B, 0x00000A0A, 0x00000000, 0x0005002C, 0x00000011, 0x0000070F,
    0x00000A0A, 0x00000A0A, 0x0005002C, 0x00000011, 0x00000724, 0x00000A0D,
    0x00000A0D, 0x0004002B, 0x0000000B, 0x00000AFA, 0x00000050, 0x0004002B,
    0x0000000B, 0x00000A3A, 0x00000010, 0x0005002C, 0x00000011, 0x00000A9F,
    0x00000AFA, 0x00000A3A, 0x00040015, 0x0000000C, 0x00000020, 0x00000001,
    0x0005001E, 0x000003F6, 0x00000011, 0x0000000B, 0x0000000B, 0x00040020,
    0x00000673, 0x00000009, 0x000003F6, 0x0004003B, 0x00000673, 0x00000CE9,
    0x00000009, 0x0004002B, 0x0000000C, 0x00000A0E, 0x00000001, 0x00040020,
    0x00000288, 0x00000009, 0x0000000B, 0x0004002B, 0x0000000C, 0x00000A11,
    0x00000002, 0x0004002B, 0x0000000C, 0x00000A0B, 0x00000000, 0x0004002B,
    0x0000000B, 0x00000A44, 0x000003FF, 0x0004002B, 0x0000000B, 0x00000A28,
    0x0000000A, 0x0004002B, 0x0000000B, 0x00000A13, 0x00000003, 0x0004002B,
    0x0000000B, 0x00000AFE, 0x00001000, 0x0004002B, 0x0000000B, 0x00000A31,
    0x0000000D, 0x0004002B, 0x0000000B, 0x00000A81, 0x000007FF, 0x0004002B,
    0x0000000B, 0x00000A37, 0x0000000F, 0x0004002B, 0x0000000B, 0x00000A16,
    0x00000004, 0x0005002C, 0x00000011, 0x0000073F, 0x00000A0A, 0x00000A16,
    0x0004002B, 0x0000000B, 0x00000A19, 0x00000005, 0x00040020, 0x0000028E,
    0x00000009, 0x00000011, 0x00040017, 0x00000014, 0x0000000B, 0x00000003,
    0x00040020, 0x00000291, 0x00000001, 0x00000014, 0x0004003B, 0x00000291,
    0x00000F48, 0x00000001, 0x00040020, 0x00000289, 0x00000001, 0x0000000B,
    0x0005002C, 0x00000011, 0x0000072A, 0x00000A13, 0x00000A0A, 0x00040017,
    0x00000017, 0x0000000B, 0x00000004, 0x0003001D, 0x000007DC, 0x00000017,
    0x0003001E, 0x000007B4, 0x000007DC, 0x00040020, 0x00000A32, 0x00000002,
    0x000007B4, 0x0004003B, 0x00000A32, 0x00000CC7, 0x00000002, 0x00040020,
    0x00000294, 0x00000002, 0x00000017, 0x0004002B, 0x0000000B, 0x00000A22,
    0x00000008, 0x0006002C, 0x00000014, 0x00000AC7, 0x00000A22, 0x00000A22,
    0x00000A0D, 0x0005002C, 0x00000011, 0x000007A2, 0x00000A37, 0x00000A0D,
    0x0005002C, 0x00000011, 0x0000074E, 0x00000A13, 0x00000A13, 0x0004002B,
    0x0000000B, 0x00000A82, 0x00000028, 0x0004002B, 0x0000000C, 0x00000A83,
    0x00000028, 0x0004002B, 0x0000000C, 0x00000993, 0xFFFFFFD8, 0x0004002B,
    0x0000000B, 0x00000184, 0x00000500, 0x0004002B, 0x0000000B, 0x0000086E,
    0x00280000, 0x00050036, 0x00000008, 0x0000161F, 0x00000000, 0x00000502,
    0x000200F8, 0x00003B06, 0x000300F7, 0x00004C7A, 0x00000000, 0x000300FB,
    0x00000A0A, 0x00002E68, 0x000200F8, 0x00002E68, 0x00050041, 0x00000288,
    0x000056E5, 0x00000CE9, 0x00000A0E, 0x0004003D, 0x0000000B, 0x00003D0B,
    0x000056E5, 0x00050041, 0x00000288, 0x000058AC, 0x00000CE9, 0x00000A11,
    0x0004003D, 0x0000000B, 0x00005158, 0x000058AC, 0x000500C7, 0x0000000B,
    0x00005051, 0x00003D0B, 0x00000A44, 0x000500C2, 0x0000000B, 0x00004E69,
    0x00003D0B, 0x00000A28, 0x000500C7, 0x0000000B, 0x00001C09, 0x00004E69,
    0x00000A13, 0x000500C7, 0x0000000B, 0x000059EF, 0x00003D0B, 0x00000AFE,
    0x000500AB, 0x00000009, 0x0000500F, 0x000059EF, 0x00000A0A, 0x000500C2,
    0x0000000B, 0x00001FCD, 0x00003D0B, 0x00000A31, 0x000500C7, 0x0000000B,
    0x0000619E, 0x00001FCD, 0x00000A81, 0x00050050, 0x00000011, 0x000022A7,
    0x00005158, 0x00005158, 0x000500C2, 0x00000011, 0x00002568, 0x000022A7,
    0x0000073F, 0x000500C7, 0x00000011, 0x00005B53, 0x00002568, 0x000007A2,
    0x000500C4, 0x00000011, 0x00003F4F, 0x00005B53, 0x0000074E, 0x00050084,
    0x00000011, 0x000059EB, 0x00003F4F, 0x00000724, 0x000500C2, 0x0000000B,
    0x00003213, 0x00005158, 0x00000A19, 0x000500C7, 0x0000000B, 0x00003F4C,
    0x00003213, 0x00000A81, 0x00050041, 0x0000028E, 0x00004A49, 0x00000CE9,
    0x00000A0B, 0x0004003D, 0x00000011, 0x00005CEC, 0x00004A49, 0x00050050,
    0x00000011, 0x0000337F, 0x00001C09, 0x00001C09, 0x000500AE, 0x0000000F,
    0x000054ED, 0x0000337F, 0x0000072D, 0x000600A9, 0x00000011, 0x00005854,
    0x000054ED, 0x00000724, 0x0000070F, 0x00050041, 0x00000289, 0x00005D52,
    0x00000F48, 0x00000A0A, 0x0004003D, 0x0000000B, 0x00004B09, 0x00005D52,
    0x00050051, 0x0000000B, 0x00004F7E, 0x00005854, 0x00000000, 0x000500C4,
    0x0000000B, 0x00003C76, 0x00003F4C, 0x00004F7E, 0x000500AE, 0x00000009,
    0x00003C13, 0x00004B09, 0x00003C76, 0x000300F7, 0x00004427, 0x00000002,
    0x000400FA, 0x00003C13, 0x000055E8, 0x00004427, 0x000200F8, 0x000055E8,
    0x000200F9, 0x00004C7A, 0x000200F8, 0x00004427, 0x0004003D, 0x00000014,
    0x0000392D, 0x00000F48, 0x0007004F, 0x00000011, 0x000050D2, 0x0000392D,
    0x0000392D, 0x00000000, 0x00000001, 0x000500C4, 0x00000011, 0x000026B5,
    0x000050D2, 0x0000072A, 0x000500C4, 0x00000011, 0x00005BF6, 0x000059EB,
    0x00005854, 0x00050080, 0x00000011, 0x00001D65, 0x000026B5, 0x00005BF6,
    0x00050086, 0x00000011, 0x000061F7, 0x00001D65, 0x00000A9F, 0x00050051,
    0x0000000B, 0x00003048, 0x000061F7, 0x00000001, 0x00050084, 0x0000000B,
    0x00002B26, 0x00003048, 0x00005051, 0x00050051, 0x0000000B, 0x00006059,
    0x000061F7, 0x00000000, 0x00050080, 0x0000000B, 0x00005420, 0x00002B26,
    0x00006059, 0x00050080, 0x0000000B, 0x00002226, 0x0000619E, 0x00005420,
    0x00050084, 0x00000011, 0x0000193B, 0x000061F7, 0x00000A9F, 0x00050082,
    0x00000011, 0x000037C7, 0x00001D65, 0x0000193B, 0x000300F7, 0x00004D0D,
    0x00000000, 0x000400FA, 0x0000500F, 0x0000293E, 0x00004D0D, 0x000200F8,
    0x0000293E, 0x00050051, 0x0000000B, 0x00002E0F, 0x000037C7, 0x00000000,
    0x0004007C, 0x0000000C, 0x00006195, 0x00002E0F, 0x000500AE, 0x00000009,
    0x00001EA1, 0x00002E0F, 0x00000A82, 0x000600A9, 0x0000000C, 0x00005828,
    0x00001EA1, 0x00000993, 0x00000A83, 0x00050080, 0x0000000C, 0x00002DF8,
    0x00006195, 0x00005828, 0x0004007C, 0x0000000B, 0x00001F87, 0x00002DF8,
    0x00060052, 0x00000011, 0x00005446, 0x00001F87, 0x000037C7, 0x00000000,
    0x000200F9, 0x00004D0D, 0x000200F8, 0x00004D0D, 0x000700F5, 0x00000011,
    0x00002159, 0x000037C7, 0x00004427, 0x00005446, 0x0000293E, 0x00050084,
    0x0000000B, 0x00001A0F, 0x00002226, 0x00000184, 0x00050051, 0x0000000B,
    0x00003644, 0x00002159, 0x00000001, 0x00050084, 0x0000000B, 0x00003E12,
    0x00003644, 0x00000AFA, 0x00050051, 0x0000000B, 0x0000605A, 0x00002159,
    0x00000000, 0x00050080, 0x0000000B, 0x0000547F, 0x00003E12, 0x0000605A,
    0x00050080, 0x0000000B, 0x00002385, 0x00001A0F, 0x0000547F, 0x00050089,
    0x0000000B, 0x000020FB, 0x00002385, 0x0000086E, 0x000500C2, 0x0000000B,
    0x00003F6A, 0x000020FB, 0x00000A10, 0x0009004F, 0x00000017, 0x00003A68,
    0x00005CEC, 0x00005CEC, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00060041, 0x00000294, 0x00001E39, 0x00000CC7, 0x00000A0B, 0x00003F6A,
    0x0003003E, 0x00001E39, 0x00003A68, 0x00050080, 0x0000000B, 0x00002CC1,
    0x00003F6A, 0x00000A0D, 0x00060041, 0x00000294, 0x00006256, 0x00000CC7,
    0x00000A0B, 0x00002CC1, 0x0003003E, 0x00006256, 0x00003A68, 0x000200F9,
    0x00004C7A, 0x000200F8, 0x00004C7A, 0x000100FD, 0x00010038,
};

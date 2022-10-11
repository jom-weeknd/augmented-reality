#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/OnImageRequestCompleteDelegate
struct OnImageRequestCompleteDelegate_t9194AD998445A53935B7F68B9977EC84956E25B3;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider
struct Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider
struct Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider
struct Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider
struct Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider
struct Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider
struct Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/Provider
struct Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_t4A177D2785B1022FAEDD19EC4B7D80529BEAFDAB;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCameraImageConversionStatus_tC34E38DB385CB342CABE7CF1392C99943BE0CBF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraImageFormat_t49B09207AE23B8011BF326475029755FE005533D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B9AEC2348486B831A3488530ACA1A6FECCC60DE;
IL2CPP_EXTERN_C String_t* _stringLiteral1399697DAB4124C76C3449E6CBB1E28BB1C2F2A1;
IL2CPP_EXTERN_C String_t* _stringLiteral16B03B9B09A75749753D1BD8C49C3482ED00598A;
IL2CPP_EXTERN_C String_t* _stringLiteral26548CA46A8BBAF979FA375FE01C8EDF043E08D2;
IL2CPP_EXTERN_C String_t* _stringLiteral3B1384C148B6355F25E67F7DFA0D39159B634A77;
IL2CPP_EXTERN_C String_t* _stringLiteral43CF1A394DF36BF047EE89F7BFA26227D4379BFB;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral489BDF1FA9922AB5F829F5BE893907E419364DF4;
IL2CPP_EXTERN_C String_t* _stringLiteral49851190ED9FA7B5B16CED19B807FDDAA864FEE9;
IL2CPP_EXTERN_C String_t* _stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59;
IL2CPP_EXTERN_C String_t* _stringLiteral58E5CEADA2059EE9E3025B80075ADE0FEECDE744;
IL2CPP_EXTERN_C String_t* _stringLiteral66302D2613F26AFE177C77015981C7FA27A369BB;
IL2CPP_EXTERN_C String_t* _stringLiteral69848EA3811CFA33C6D149D0D7D3E7BB386BD641;
IL2CPP_EXTERN_C String_t* _stringLiteral704C51A0DAD6B36AE5557F6EC82739898E4BFB61;
IL2CPP_EXTERN_C String_t* _stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C;
IL2CPP_EXTERN_C String_t* _stringLiteral7C870909849A9D8B2B4A755041CC27EB6D76483B;
IL2CPP_EXTERN_C String_t* _stringLiteralB51BA3F369D95E685969CC962493A3F0B421BA4D;
IL2CPP_EXTERN_C String_t* _stringLiteralC0B4B38DF46ED4D03D7C485E35630F8DE8B07040;
IL2CPP_EXTERN_C String_t* _stringLiteralC6EAFD4C3B23645C412BB41A74CBFEB5A62E11BF;
IL2CPP_EXTERN_C String_t* _stringLiteralCD0C03FFF40E6F1D242821369D83EC4658F16D35;
IL2CPP_EXTERN_C String_t* _stringLiteralF20EFFC62AFBE813D48D4D9EAF1FF59EFA14655F;
IL2CPP_EXTERN_C String_t* _stringLiteralF888230443F7BB68D49D53BBE56D2A722FDD6CA2;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m55427120ACDC71253ECC88FB9FE3C72B9B8DC920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m1C9702FA1520BB681C0979C7264DA107FC2AD627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_ConvertAsync_m06D325E90BF24673298C3E9BEF0BE035437B6DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_ConvertAsync_m99E7F47A422963B99B2EB9ABC0272695A7AC7647_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_DisposeAsyncRequest_m55540654AA9939077AEBE3B1F0D8789B21E123FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_DisposeImage_m5E9ECDB6F4EFABE5128E5C073FF773FADA6E77FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_GetAsyncRequestStatus_m2D96A257FFAB2782C90CB324939ED4AAA67AF901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_GetBoundary_mFEC076BA5F9EAEFB5CFD36A8A690CD6B9449A45A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_NativeHandleValid_m862E87AE9A7D1717C9AFA7559ADB3B3112535C6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_Raycast_m848F042E5613BB90E3A933E19E8229D7C94914C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_Raycast_mBEE3804BA51E701D3775CC4AC1AFD16FEB97FB72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_RemoveEnvironmentProbe_m1C8E9F616E2D1F98ECF86A3D6101B9A7ACB949D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_SetAutomaticPlacement_m4911FE87C4FCB867A50DD09C35F81D0CA5781F0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryAcquireLatestImage_mF4CAC046B6B0FF86E69236F24661F5C708205E24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryAddEnvironmentProbe_m3290B8D160B758811040A94F335843B1665618D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryConvert_m1503528DCB5E893D74210C7DD24E3E380FEA08A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryGetAsyncRequestData_m27ED8D748271A517B7C606EE7D9AEA8D59184837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryGetConvertedDataSize_m629186A29644B2C721EC25EDA37B70107148C79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryGetPlane_m8590F9C7FD4F42B71DBF1518294C95F17BEF5C51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TrySetEnvironmentTextureHDREnabled_mB69708ABD17881CD9BE7AE2067AC85A2548CF9FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_get_frameRate_mC445B76B58305DB89474EBF4A1EAC3DFBB8268D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_currentConfiguration_m99D438CC1ABE5E92215CA7FA369BE61A7652ED66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_matchFrameRate_mA9C1E42C866CCD99055A7B2CE2051EF13D167399_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_maxNumberOfMovingImages_m53009F3A682E6213EC096C7E59879B43D2A37052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_maximumFaceCount_mC01823514E5294220C5C1FE2E3A6E11A355D1FF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CameraImageCinfo_Equals_m1D15CAC540169F284F58009C1CB79CECD4BEBD61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraImageCinfo_Equals_m496FE2CBBC5F7F0D7208D05892EF845EC4ED88D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraImageCinfo_ToString_mFFF35D560345AA4225983C0CCA7A900127D9BE2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraImagePlaneCinfo_Equals_mA584B5FBAB613A1B7A83B1C0413089390EFFCBBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraImagePlaneCinfo_ToString_m2B60D32513350E0AE53B003B7F3E94F75B3D86AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m440F4649C6BFDCECAD80ABF23873BB9C82F9938A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_GetHashCode_m2D92CDC387387B380C281CE4FFD26A62D889E133_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnImageRequestCompleteDelegate_BeginInvoke_m324742C0A7360C58544FFD0B8AF04F502273E774_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_ConvertAsync_m06D325E90BF24673298C3E9BEF0BE035437B6DFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_ConvertAsync_m99E7F47A422963B99B2EB9ABC0272695A7AC7647_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_DisposeAsyncRequest_m55540654AA9939077AEBE3B1F0D8789B21E123FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_DisposeImage_m5E9ECDB6F4EFABE5128E5C073FF773FADA6E77FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetAsyncRequestStatus_m2D96A257FFAB2782C90CB324939ED4AAA67AF901_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetAvailabilityAsync_m0C73C4907A03BA2F018EA2C0CE66C9C17423C6DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetBoundary_mFEC076BA5F9EAEFB5CFD36A8A690CD6B9449A45A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetConfigurations_m528095C5BA179D1FD2CF679EE89B6B1C216E6834_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetTextureDescriptors_mB6ED5AD6E33BCFE3E70916A227CC81541307C68A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_InstallAsync_m17CAA895097CD78BC743DD1CA0CB4B6F5F7091D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_NativeHandleValid_m862E87AE9A7D1717C9AFA7559ADB3B3112535C6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_Raycast_m848F042E5613BB90E3A933E19E8229D7C94914C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_Raycast_mBEE3804BA51E701D3775CC4AC1AFD16FEB97FB72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_RemoveEnvironmentProbe_m1C8E9F616E2D1F98ECF86A3D6101B9A7ACB949D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_SetAutomaticPlacement_m4911FE87C4FCB867A50DD09C35F81D0CA5781F0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_TryAcquireLatestImage_mF4CAC046B6B0FF86E69236F24661F5C708205E24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_TryAddEnvironmentProbe_m3290B8D160B758811040A94F335843B1665618D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_TryConvert_m1503528DCB5E893D74210C7DD24E3E380FEA08A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_TryGetAsyncRequestData_m27ED8D748271A517B7C606EE7D9AEA8D59184837_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_TryGetConvertedDataSize_m629186A29644B2C721EC25EDA37B70107148C79B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_TryGetPlane_m8590F9C7FD4F42B71DBF1518294C95F17BEF5C51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_TrySetEnvironmentTextureHDREnabled_mB69708ABD17881CD9BE7AE2067AC85A2548CF9FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_get_frameRate_mC445B76B58305DB89474EBF4A1EAC3DFBB8268D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_get_nativePtr_m36BB948CA26F060AE9F9B5E77191B48605C5770B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_get_sessionId_m28A8F75715D7469B0F555CAC2E9B7D71B68CAFCE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_set_currentConfiguration_m99D438CC1ABE5E92215CA7FA369BE61A7652ED66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_set_matchFrameRate_mA9C1E42C866CCD99055A7B2CE2051EF13D167399_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_set_maxNumberOfMovingImages_m53009F3A682E6213EC096C7E59879B43D2A37052_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_set_maximumFaceCount_mC01823514E5294220C5C1FE2E3A6E11A355D1FF4_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem_Provider
struct  Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider
struct  Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem_Provider
struct  Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider
struct  Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRFaceSubsystem_Provider
struct  Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem_Provider
struct  Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem_Provider
struct  Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_Provider
struct  Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_Provider
struct  Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_Provider
struct  Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider
struct  Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.RectInt
struct  RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 
{
public:
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_XMin_0)); }
	inline int32_t get_m_XMin_0() const { return ___m_XMin_0; }
	inline int32_t* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(int32_t value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_YMin_1)); }
	inline int32_t get_m_YMin_1() const { return ___m_YMin_1; }
	inline int32_t* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(int32_t value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_Width_2)); }
	inline int32_t get_m_Width_2() const { return ___m_Width_2; }
	inline int32_t* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(int32_t value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_Height_3)); }
	inline int32_t get_m_Height_3() const { return ___m_Height_3; }
	inline int32_t* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(int32_t value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo
struct  Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo
struct  Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<supportsMovingImages>k__BackingField
	bool ___U3CsupportsMovingImagesU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<requiresPhysicalImageDimensions>k__BackingField
	bool ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<supportsMutableLibrary>k__BackingField
	bool ___U3CsupportsMutableLibraryU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsMovingImagesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsupportsMovingImagesU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsMovingImagesU3Ek__BackingField_2() const { return ___U3CsupportsMovingImagesU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsMovingImagesU3Ek__BackingField_2() { return &___U3CsupportsMovingImagesU3Ek__BackingField_2; }
	inline void set_U3CsupportsMovingImagesU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsMovingImagesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3)); }
	inline bool get_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3() const { return ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3() { return &___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3; }
	inline void set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3(bool value)
	{
		___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMutableLibraryU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsupportsMutableLibraryU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsMutableLibraryU3Ek__BackingField_4() const { return ___U3CsupportsMutableLibraryU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsMutableLibraryU3Ek__BackingField_4() { return &___U3CsupportsMutableLibraryU3Ek__BackingField_4; }
	inline void set_U3CsupportsMutableLibraryU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsMutableLibraryU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_2;
	int32_t ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3;
	int32_t ___U3CsupportsMutableLibraryU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_2;
	int32_t ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3;
	int32_t ___U3CsupportsMutableLibraryU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo
struct  Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() const { return ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() { return &___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2; }
	inline void set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() const { return ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() { return &___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3; }
	inline void set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() const { return ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() { return &___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_5; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsClassificationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsClassificationU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsClassificationU3Ek__BackingField_6() const { return ___U3CsupportsClassificationU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsClassificationU3Ek__BackingField_6() { return &___U3CsupportsClassificationU3Ek__BackingField_6; }
	inline void set_U3CsupportsClassificationU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsClassificationU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo
struct  Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo
struct  Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsInstallU3Ek__BackingField_0)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_0() const { return ___U3CsupportsInstallU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_0() { return &___U3CsupportsInstallU3Ek__BackingField_0; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_0(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsMatchFrameRateU3Ek__BackingField_1)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_1() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CidU3Ek__BackingField_2)); }
	inline String_t* get_U3CidU3Ek__BackingField_2() const { return ___U3CidU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_2() { return &___U3CidU3Ek__BackingField_2; }
	inline void set_U3CidU3Ek__BackingField_2(String_t* value)
	{
		___U3CidU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.ScreenOrientation
struct  ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.AsyncCameraImageConversionStatus
struct  AsyncCameraImageConversionStatus_tC34E38DB385CB342CABE7CF1392C99943BE0CBF5 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.AsyncCameraImageConversionStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncCameraImageConversionStatus_tC34E38DB385CB342CABE7CF1392C99943BE0CBF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraFocusMode
struct  CameraFocusMode_t573CBB96E832D97A59EE6B5EBF79568A5C83042A 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFocusMode_t573CBB96E832D97A59EE6B5EBF79568A5C83042A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraImageFormat
struct  CameraImageFormat_t49B09207AE23B8011BF326475029755FE005533D 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraImageFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraImageFormat_t49B09207AE23B8011BF326475029755FE005533D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraImageTransformation
struct  CameraImageTransformation_t6997BBFB143F07CC4FACB9CF470B98D5746B3B80 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraImageTransformation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraImageTransformation_t6997BBFB143F07CC4FACB9CF470B98D5746B3B80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.LightEstimationMode
struct  LightEstimationMode_tE07D0ADA96C21197E44E8E906DF0FCECB7DAEC56 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.LightEstimationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimationMode_tE07D0ADA96C21197E44E8E906DF0FCECB7DAEC56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct  NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneDetectionMode
struct  PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct  SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionInstallationStatus
struct  SessionInstallationStatus_t5298F0EEA216D050FFE923AE490498BBF0792F7E 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionInstallationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionInstallationStatus_t5298F0EEA216D050FFE923AE490498BBF0792F7E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct  TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct  XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A 
{
public:
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;

public:
	inline static int32_t get_offset_of_m_Resolution_0() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Resolution_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Resolution_0() const { return ___m_Resolution_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Resolution_0() { return &___m_Resolution_0; }
	inline void set_m_Resolution_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Resolution_0 = value;
	}

	inline static int32_t get_offset_of_m_Framerate_1() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Framerate_1)); }
	inline int32_t get_m_Framerate_1() const { return ___m_Framerate_1; }
	inline int32_t* get_address_of_m_Framerate_1() { return &___m_Framerate_1; }
	inline void set_m_Framerate_1(int32_t value)
	{
		___m_Framerate_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraFrameProperties
struct  XRCameraFrameProperties_t57C3A208DCCC01241BA413286A98B1726773200C 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraFrameProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRCameraFrameProperties_t57C3A208DCCC01241BA413286A98B1726773200C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraIntrinsics
struct  XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD 
{
public:
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_FocalLength
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_FocalLength_0;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_PrincipalPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PrincipalPoint_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_Resolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Resolution_2;

public:
	inline static int32_t get_offset_of_m_FocalLength_0() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD, ___m_FocalLength_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_FocalLength_0() const { return ___m_FocalLength_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_FocalLength_0() { return &___m_FocalLength_0; }
	inline void set_m_FocalLength_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_FocalLength_0 = value;
	}

	inline static int32_t get_offset_of_m_PrincipalPoint_1() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD, ___m_PrincipalPoint_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PrincipalPoint_1() const { return ___m_PrincipalPoint_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PrincipalPoint_1() { return &___m_PrincipalPoint_1; }
	inline void set_m_PrincipalPoint_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PrincipalPoint_1 = value;
	}

	inline static int32_t get_offset_of_m_Resolution_2() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD, ___m_Resolution_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Resolution_2() const { return ___m_Resolution_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Resolution_2() { return &___m_Resolution_2; }
	inline void set_m_Resolution_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Resolution_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo
struct  CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::m_DataPtr
	intptr_t ___m_DataPtr_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::m_DataLength
	int32_t ___m_DataLength_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::m_RowStride
	int32_t ___m_RowStride_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::m_PixelStride
	int32_t ___m_PixelStride_3;

public:
	inline static int32_t get_offset_of_m_DataPtr_0() { return static_cast<int32_t>(offsetof(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7, ___m_DataPtr_0)); }
	inline intptr_t get_m_DataPtr_0() const { return ___m_DataPtr_0; }
	inline intptr_t* get_address_of_m_DataPtr_0() { return &___m_DataPtr_0; }
	inline void set_m_DataPtr_0(intptr_t value)
	{
		___m_DataPtr_0 = value;
	}

	inline static int32_t get_offset_of_m_DataLength_1() { return static_cast<int32_t>(offsetof(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7, ___m_DataLength_1)); }
	inline int32_t get_m_DataLength_1() const { return ___m_DataLength_1; }
	inline int32_t* get_address_of_m_DataLength_1() { return &___m_DataLength_1; }
	inline void set_m_DataLength_1(int32_t value)
	{
		___m_DataLength_1 = value;
	}

	inline static int32_t get_offset_of_m_RowStride_2() { return static_cast<int32_t>(offsetof(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7, ___m_RowStride_2)); }
	inline int32_t get_m_RowStride_2() const { return ___m_RowStride_2; }
	inline int32_t* get_address_of_m_RowStride_2() { return &___m_RowStride_2; }
	inline void set_m_RowStride_2(int32_t value)
	{
		___m_RowStride_2 = value;
	}

	inline static int32_t get_offset_of_m_PixelStride_3() { return static_cast<int32_t>(offsetof(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7, ___m_PixelStride_3)); }
	inline int32_t get_m_PixelStride_3() const { return ___m_PixelStride_3; }
	inline int32_t* get_address_of_m_PixelStride_3() { return &___m_PixelStride_3; }
	inline void set_m_PixelStride_3(int32_t value)
	{
		___m_PixelStride_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities
struct  Capabilities_t6199DDFE580DA802DBAEC0155BA1C345525286CC 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t6199DDFE580DA802DBAEC0155BA1C345525286CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFaceMesh_Attributes
struct  Attributes_tD47C14745EB853AB5A128A56544CF6C1BC670186 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRFaceMesh_Attributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Attributes_tD47C14745EB853AB5A128A56544CF6C1BC670186, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor_Capabilities
struct  Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor_Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct  Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C 
{
public:
	// T System.Nullable`1::value
	XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C, ___value_0)); }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  get_value_0() const { return ___value_0; }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct  NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct  NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct  NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct  NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct  NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Shader
struct  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct  Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct  Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchor
struct  XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields, ___s_Default_0)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraFrame
struct  XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 
{
public:
	// System.Int64 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TimestampNs
	int64_t ___m_TimestampNs_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageBrightness
	float ___m_AverageBrightness_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageColorTemperature
	float ___m_AverageColorTemperature_2;
	// UnityEngine.Color UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ColorCorrection
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_ColorCorrection_3;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ProjectionMatrix_4;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_DisplayMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_DisplayMatrix_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraFrame::m_NativePtr
	intptr_t ___m_NativePtr_7;
	// UnityEngine.XR.ARSubsystems.XRCameraFrameProperties UnityEngine.XR.ARSubsystems.XRCameraFrame::m_Properties
	int32_t ___m_Properties_8;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageIntensityInLumens
	float ___m_AverageIntensityInLumens_9;
	// System.Double UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ExposureDuration
	double ___m_ExposureDuration_10;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ExposureOffset
	float ___m_ExposureOffset_11;

public:
	inline static int32_t get_offset_of_m_TimestampNs_0() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_TimestampNs_0)); }
	inline int64_t get_m_TimestampNs_0() const { return ___m_TimestampNs_0; }
	inline int64_t* get_address_of_m_TimestampNs_0() { return &___m_TimestampNs_0; }
	inline void set_m_TimestampNs_0(int64_t value)
	{
		___m_TimestampNs_0 = value;
	}

	inline static int32_t get_offset_of_m_AverageBrightness_1() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_AverageBrightness_1)); }
	inline float get_m_AverageBrightness_1() const { return ___m_AverageBrightness_1; }
	inline float* get_address_of_m_AverageBrightness_1() { return &___m_AverageBrightness_1; }
	inline void set_m_AverageBrightness_1(float value)
	{
		___m_AverageBrightness_1 = value;
	}

	inline static int32_t get_offset_of_m_AverageColorTemperature_2() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_AverageColorTemperature_2)); }
	inline float get_m_AverageColorTemperature_2() const { return ___m_AverageColorTemperature_2; }
	inline float* get_address_of_m_AverageColorTemperature_2() { return &___m_AverageColorTemperature_2; }
	inline void set_m_AverageColorTemperature_2(float value)
	{
		___m_AverageColorTemperature_2 = value;
	}

	inline static int32_t get_offset_of_m_ColorCorrection_3() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_ColorCorrection_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_ColorCorrection_3() const { return ___m_ColorCorrection_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_ColorCorrection_3() { return &___m_ColorCorrection_3; }
	inline void set_m_ColorCorrection_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_ColorCorrection_3 = value;
	}

	inline static int32_t get_offset_of_m_ProjectionMatrix_4() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_ProjectionMatrix_4)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_ProjectionMatrix_4() const { return ___m_ProjectionMatrix_4; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_ProjectionMatrix_4() { return &___m_ProjectionMatrix_4; }
	inline void set_m_ProjectionMatrix_4(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_ProjectionMatrix_4 = value;
	}

	inline static int32_t get_offset_of_m_DisplayMatrix_5() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_DisplayMatrix_5)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_DisplayMatrix_5() const { return ___m_DisplayMatrix_5; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_DisplayMatrix_5() { return &___m_DisplayMatrix_5; }
	inline void set_m_DisplayMatrix_5(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_DisplayMatrix_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}

	inline static int32_t get_offset_of_m_Properties_8() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_Properties_8)); }
	inline int32_t get_m_Properties_8() const { return ___m_Properties_8; }
	inline int32_t* get_address_of_m_Properties_8() { return &___m_Properties_8; }
	inline void set_m_Properties_8(int32_t value)
	{
		___m_Properties_8 = value;
	}

	inline static int32_t get_offset_of_m_AverageIntensityInLumens_9() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_AverageIntensityInLumens_9)); }
	inline float get_m_AverageIntensityInLumens_9() const { return ___m_AverageIntensityInLumens_9; }
	inline float* get_address_of_m_AverageIntensityInLumens_9() { return &___m_AverageIntensityInLumens_9; }
	inline void set_m_AverageIntensityInLumens_9(float value)
	{
		___m_AverageIntensityInLumens_9 = value;
	}

	inline static int32_t get_offset_of_m_ExposureDuration_10() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_ExposureDuration_10)); }
	inline double get_m_ExposureDuration_10() const { return ___m_ExposureDuration_10; }
	inline double* get_address_of_m_ExposureDuration_10() { return &___m_ExposureDuration_10; }
	inline void set_m_ExposureDuration_10(double value)
	{
		___m_ExposureDuration_10 = value;
	}

	inline static int32_t get_offset_of_m_ExposureOffset_11() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_ExposureOffset_11)); }
	inline float get_m_ExposureOffset_11() const { return ___m_ExposureOffset_11; }
	inline float* get_address_of_m_ExposureOffset_11() { return &___m_ExposureOffset_11; }
	inline void set_m_ExposureOffset_11(float value)
	{
		___m_ExposureOffset_11 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams
struct  XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6 
{
public:
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams::m_InputRect
	RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams::m_OutputDimensions
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.CameraImageTransformation UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams::m_Transformation
	int32_t ___m_Transformation_3;

public:
	inline static int32_t get_offset_of_m_InputRect_0() { return static_cast<int32_t>(offsetof(XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6, ___m_InputRect_0)); }
	inline RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  get_m_InputRect_0() const { return ___m_InputRect_0; }
	inline RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * get_address_of_m_InputRect_0() { return &___m_InputRect_0; }
	inline void set_m_InputRect_0(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  value)
	{
		___m_InputRect_0 = value;
	}

	inline static int32_t get_offset_of_m_OutputDimensions_1() { return static_cast<int32_t>(offsetof(XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6, ___m_OutputDimensions_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_OutputDimensions_1() const { return ___m_OutputDimensions_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_OutputDimensions_1() { return &___m_OutputDimensions_1; }
	inline void set_m_OutputDimensions_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_OutputDimensions_1 = value;
	}

	inline static int32_t get_offset_of_m_Format_2() { return static_cast<int32_t>(offsetof(XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6, ___m_Format_2)); }
	inline int32_t get_m_Format_2() const { return ___m_Format_2; }
	inline int32_t* get_address_of_m_Format_2() { return &___m_Format_2; }
	inline void set_m_Format_2(int32_t value)
	{
		___m_Format_2 = value;
	}

	inline static int32_t get_offset_of_m_Transformation_3() { return static_cast<int32_t>(offsetof(XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6, ___m_Transformation_3)); }
	inline int32_t get_m_Transformation_3() const { return ___m_Transformation_3; }
	inline int32_t* get_address_of_m_Transformation_3() { return &___m_Transformation_3; }
	inline void set_m_Transformation_3(int32_t value)
	{
		___m_Transformation_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraParams
struct  XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 
{
public:
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZNear
	float ___m_ZNear_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZFar
	float ___m_ZFar_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenWidth
	float ___m_ScreenWidth_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenHeight
	float ___m_ScreenHeight_3;
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenOrientation
	int32_t ___m_ScreenOrientation_4;

public:
	inline static int32_t get_offset_of_m_ZNear_0() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ZNear_0)); }
	inline float get_m_ZNear_0() const { return ___m_ZNear_0; }
	inline float* get_address_of_m_ZNear_0() { return &___m_ZNear_0; }
	inline void set_m_ZNear_0(float value)
	{
		___m_ZNear_0 = value;
	}

	inline static int32_t get_offset_of_m_ZFar_1() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ZFar_1)); }
	inline float get_m_ZFar_1() const { return ___m_ZFar_1; }
	inline float* get_address_of_m_ZFar_1() { return &___m_ZFar_1; }
	inline void set_m_ZFar_1(float value)
	{
		___m_ZFar_1 = value;
	}

	inline static int32_t get_offset_of_m_ScreenWidth_2() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ScreenWidth_2)); }
	inline float get_m_ScreenWidth_2() const { return ___m_ScreenWidth_2; }
	inline float* get_address_of_m_ScreenWidth_2() { return &___m_ScreenWidth_2; }
	inline void set_m_ScreenWidth_2(float value)
	{
		___m_ScreenWidth_2 = value;
	}

	inline static int32_t get_offset_of_m_ScreenHeight_3() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ScreenHeight_3)); }
	inline float get_m_ScreenHeight_3() const { return ___m_ScreenHeight_3; }
	inline float* get_address_of_m_ScreenHeight_3() { return &___m_ScreenHeight_3; }
	inline void set_m_ScreenHeight_3(float value)
	{
		___m_ScreenHeight_3 = value;
	}

	inline static int32_t get_offset_of_m_ScreenOrientation_4() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ScreenOrientation_4)); }
	inline int32_t get_m_ScreenOrientation_4() const { return ___m_ScreenOrientation_4; }
	inline int32_t* get_address_of_m_ScreenOrientation_4() { return &___m_ScreenOrientation_4; }
	inline void set_m_ScreenOrientation_4(int32_t value)
	{
		___m_ScreenOrientation_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo
struct  CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::m_Dimensions
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Dimensions_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::m_PlaneCount
	int32_t ___m_PlaneCount_2;
	// System.Double UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::m_Timestamp
	double ___m_Timestamp_3;
	// UnityEngine.XR.ARSubsystems.CameraImageFormat UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::m_Format
	int32_t ___m_Format_4;

public:
	inline static int32_t get_offset_of_m_NativeHandle_0() { return static_cast<int32_t>(offsetof(CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8, ___m_NativeHandle_0)); }
	inline int32_t get_m_NativeHandle_0() const { return ___m_NativeHandle_0; }
	inline int32_t* get_address_of_m_NativeHandle_0() { return &___m_NativeHandle_0; }
	inline void set_m_NativeHandle_0(int32_t value)
	{
		___m_NativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_m_Dimensions_1() { return static_cast<int32_t>(offsetof(CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8, ___m_Dimensions_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Dimensions_1() const { return ___m_Dimensions_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Dimensions_1() { return &___m_Dimensions_1; }
	inline void set_m_Dimensions_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Dimensions_1 = value;
	}

	inline static int32_t get_offset_of_m_PlaneCount_2() { return static_cast<int32_t>(offsetof(CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8, ___m_PlaneCount_2)); }
	inline int32_t get_m_PlaneCount_2() const { return ___m_PlaneCount_2; }
	inline int32_t* get_address_of_m_PlaneCount_2() { return &___m_PlaneCount_2; }
	inline void set_m_PlaneCount_2(int32_t value)
	{
		___m_PlaneCount_2 = value;
	}

	inline static int32_t get_offset_of_m_Timestamp_3() { return static_cast<int32_t>(offsetof(CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8, ___m_Timestamp_3)); }
	inline double get_m_Timestamp_3() const { return ___m_Timestamp_3; }
	inline double* get_address_of_m_Timestamp_3() { return &___m_Timestamp_3; }
	inline void set_m_Timestamp_3(double value)
	{
		___m_Timestamp_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo
struct  Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::id
	String_t* ___id_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::implementationType
	Type_t * ___implementationType_1;
	// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_implementationType_1() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___implementationType_1)); }
	inline Type_t * get_implementationType_1() const { return ___implementationType_1; }
	inline Type_t ** get_address_of_implementationType_1() { return &___implementationType_1; }
	inline void set_implementationType_1(Type_t * value)
	{
		___implementationType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementationType_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___U3CcapabilitiesU3Ek__BackingField_2)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_2() const { return ___U3CcapabilitiesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_2() { return &___U3CcapabilitiesU3Ek__BackingField_2; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_2(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke
{
	char* ___id_0;
	Type_t * ___implementationType_1;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com
{
	Il2CppChar* ___id_0;
	Type_t * ___implementationType_1;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct  XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo
struct  Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() const { return ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return &___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline void set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() const { return ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return &___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline void set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedTrackableTypesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportedTrackableTypesU3Ek__BackingField_4)); }
	inline int32_t get_U3CsupportedTrackableTypesU3Ek__BackingField_4() const { return ___U3CsupportedTrackableTypesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CsupportedTrackableTypesU3Ek__BackingField_4() { return &___U3CsupportedTrackableTypesU3Ek__BackingField_4; }
	inline void set_U3CsupportedTrackableTypesU3Ek__BackingField_4(int32_t value)
	{
		___U3CsupportedTrackableTypesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct  XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::s_Default
	XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields, ___s_Default_0)); }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  get_s_Default_0() const { return ___s_Default_0; }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct  XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F 
{
public:
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CscreenDimensionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CscreenOrientationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F, ___U3CscreenOrientationU3Ek__BackingField_0)); }
	inline int32_t get_U3CscreenOrientationU3Ek__BackingField_0() const { return ___U3CscreenOrientationU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CscreenOrientationU3Ek__BackingField_0() { return &___U3CscreenOrientationU3Ek__BackingField_0; }
	inline void set_U3CscreenOrientationU3Ek__BackingField_0(int32_t value)
	{
		___U3CscreenOrientationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CscreenDimensionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F, ___U3CscreenDimensionsU3Ek__BackingField_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_U3CscreenDimensionsU3Ek__BackingField_1() const { return ___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_U3CscreenDimensionsU3Ek__BackingField_1() { return &___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline void set_U3CscreenDimensionsU3Ek__BackingField_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___U3CscreenDimensionsU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct  XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_OnImageRequestCompleteDelegate
struct  OnImageRequestCompleteDelegate_t9194AD998445A53935B7F68B9977EC84956E25B3  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct  XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Scale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_TextureDescriptor_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Scale_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Scale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Scale_2() const { return ___m_Scale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Scale_2() { return &___m_Scale_2; }
	inline void set_m_Scale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Scale_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Size_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TextureDescriptor_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TextureDescriptor_5)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_TextureDescriptor_5() const { return ___m_TextureDescriptor_5; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_TextureDescriptor_5() { return &___m_TextureDescriptor_5; }
	inline void set_m_TextureDescriptor_5(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_TextureDescriptor_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};

struct XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbe UnityEngine.XR.ARSubsystems.XREnvironmentProbe::s_Default
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields, ___s_Default_0)); }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  get_s_Default_0() const { return ___s_Default_0; }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct  XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_UVs_3;

public:
	inline static int32_t get_offset_of_m_Vertices_0() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Vertices_0)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Vertices_0() const { return ___m_Vertices_0; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Vertices_0() { return &___m_Vertices_0; }
	inline void set_m_Vertices_0(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Vertices_0 = value;
	}

	inline static int32_t get_offset_of_m_Normals_1() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Normals_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Normals_1() const { return ___m_Normals_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Normals_1() { return &___m_Normals_1; }
	inline void set_m_Normals_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Normals_1 = value;
	}

	inline static int32_t get_offset_of_m_Indices_2() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Indices_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_Indices_2() const { return ___m_Indices_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_Indices_2() { return &___m_Indices_2; }
	inline void set_m_Indices_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_Indices_2 = value;
	}

	inline static int32_t get_offset_of_m_UVs_3() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_UVs_3)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_UVs_3() const { return ___m_UVs_3; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_UVs_3() { return &___m_UVs_3; }
	inline void set_m_UVs_3(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_UVs_3 = value;
	}
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m55427120ACDC71253ECC88FB9FE3C72B9B8DC920_gshared (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A_gshared (NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t4A177D2785B1022FAEDD19EC4B7D80529BEAFDAB * Promise_1_CreateResolvedPromise_m4772DECEBD5DFF6811D242285DE7B47DD5749CE4_gshared (int32_t ___result0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m22F8F6D7511C66B0B2240DABFBA9A38D01C8A31F_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_supportsTrackableAttachments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::get_nativeHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImageCinfo_get_nativeHandle_mAA33429DC514605299C7299B3FA58D6FF181F129_inline (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::get_dimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  CameraImageCinfo_get_dimensions_mF825187AC7021EB0AC8B67D62C173CAF2C3F3E75_inline (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::get_planeCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImageCinfo_get_planeCount_m908994322F1F23572F94579C395EF075F520BEEA_inline (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::get_timestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CameraImageCinfo_get_timestamp_mD46C187B596B91C5B2972547A981F690C5E8F57B_inline (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.CameraImageFormat UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::get_format()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImageCinfo_get_format_mEAE51C8E4500B1BA39EAF59AB821DB63561ED1B0_inline (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::.ctor(System.Int32,UnityEngine.Vector2Int,System.Int32,System.Double,UnityEngine.XR.ARSubsystems.CameraImageFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageCinfo__ctor_mD811DE31A50A88F4752816C83F29DCB091838735 (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, int32_t ___nativeHandle0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___dimensions1, int32_t ___planeCount2, double ___timestamp3, int32_t ___format4, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___other0, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B (double* __this, double ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::Equals(UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImageCinfo_Equals_m1D15CAC540169F284F58009C1CB79CECD4BEBD61 (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImageCinfo_Equals_m496FE2CBBC5F7F0D7208D05892EF845EC4ED88D0 (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImageCinfo_op_Equality_mF13F393A5FACC397A80CF3EEB47D92453FB37570 (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  ___lhs0, CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  ___rhs1, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mB963D0B9A29E161BC4B73F97AEAF2F843FC8EF71 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 System.Double::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39 (double* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImageCinfo_GetHashCode_m6DC3794D26947F8C89D6DF45D4682AA32E6B3D5C (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector2Int::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2Int_ToString_m7928A3CC56D9CAAB370F6B3EE797CED4BE9B9B20 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CameraImageCinfo_ToString_mFFF35D560345AA4225983C0CCA7A900127D9BE2C (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::get_dataPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::get_dataLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::get_rowStride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::get_pixelStride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::.ctor(System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImagePlaneCinfo__ctor_m4D60A5611661F51C4B78AEABE6482BD31951D2CB (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, intptr_t ___dataPtr0, int32_t ___dataLength1, int32_t ___rowStride2, int32_t ___pixelStride3, const RuntimeMethod* method);
// System.Boolean System.IntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0 (intptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::Equals(UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImagePlaneCinfo_Equals_mA584B5FBAB613A1B7A83B1C0413089390EFFCBBD (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImagePlaneCinfo_op_Equality_mD2D9CB2269AA227922D85404DE0D39FD1974FF1D (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  ___lhs0, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  ___rhs1, const RuntimeMethod* method);
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D (intptr_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_GetHashCode_mD22746F20EA784A20EE4502A78218457A48125E3 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method);
// System.String System.IntPtr::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_mC499BFB66CB492853717FFACA63599701FC1E91C (intptr_t* __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImagePlaneCinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CameraImagePlaneCinfo_ToString_m2B60D32513350E0AE53B003B7F3E94F75B3D86AD (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m55427120ACDC71253ECC88FB9FE3C72B9B8DC920 (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m55427120ACDC71253ECC88FB9FE3C72B9B8DC920_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A (NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_capabilities()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_supportsFeaturePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_capabilities(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_supportsConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_supportsUniqueIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m93DAAACF242CBA5B8EE758CE4E04BCCF51639860 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Dispose_m84478F08EEB3D131E0E7785CF4195D424B94543E (XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_supportsMovingImages()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMovingImages(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_requiresPhysicalImageDimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_requiresPhysicalImageDimensions(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_supportsMutableLibrary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMutableLibrary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411 (bool* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsHorizontalPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsVerticalPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsArbitraryPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsBoundaryVertices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsClassification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportedTrackableTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mD7343957DA2CC53442EE463285B402E743AB5F6D_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m219B4D8D74447725A14F7BD44138EBA80D24347C_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_supportsTrackableAttachments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_mEB155EF1924D1549BAA15B29CABA3396F872A8AB_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m151F963D473554CDCC0C403883C16AB111751716_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m2D92CDC387387B380C281CE4FFD26A62D889E133 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m440F4649C6BFDCECAD80ABF23873BB9C82F9938A (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(T)
inline Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m4772DECEBD5DFF6811D242285DE7B47DD5749CE4_gshared)(___result0, method);
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>::CreateResolvedPromise(T)
inline Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88 * Promise_1_CreateResolvedPromise_m1C9702FA1520BB681C0979C7264DA107FC2AD627 (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88 * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m4772DECEBD5DFF6811D242285DE7B47DD5749CE4_gshared)(___result0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m6130D9208952692B2EAA00F50C703214B9091E61 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mBA3B7F7D619B27863B6CC31B62B144612A1CEE0B (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m5D584AD8BE19CC4788FA8AC2D0B9A2363AAF537B (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Destroy() { }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem_Provider::TryAddAnchor(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddAnchor_m8BAE08000E72193AE272504162CD3CAE9E2011D3 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___anchor1, const RuntimeMethod* method)
{
	{
		// anchor = default(XRAnchor);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * L_0 = ___anchor1;
		il2cpp_codegen_initobj(L_0, sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C ));
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem_Provider::TryAttachAnchor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAttachAnchor_mAAFB29BF47A06D1B7B5EA30849047CFC2E91072A (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableToAffix0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___anchor2, const RuntimeMethod* method)
{
	{
		// anchor = default(XRAnchor);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * L_0 = ___anchor2;
		il2cpp_codegen_initobj(L_0, sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C ));
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem_Provider::TryRemoveAnchor(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryRemoveAnchor_m21FBBF8C515908F05CF755B85B9643760E6BB2F7 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___anchorId0, const RuntimeMethod* method)
{
	{
		// public virtual bool TryRemoveAnchor(TrackableId anchorId) => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_pinvoke(const Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7& unmarshaled, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_pinvoke_back(const Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke& marshaled, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_pinvoke_cleanup(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_com(const Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7& unmarshaled, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_com_back(const Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com& marshaled, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_com_cleanup(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	return Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m22F8F6D7511C66B0B2240DABFBA9A38D01C8A31F (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_m22F8F6D7511C66B0B2240DABFBA9A38D01C8A31F_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_m22F8F6D7511C66B0B2240DABFBA9A38D01C8A31F_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::get_supportsTrackableAttachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	return Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var hash = (id == null) ? 0 : id.GetHashCode();
		String_t* L_0 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		// hash = hash * 486187739 + ((subsystemImplementationType == null) ? 0 : subsystemImplementationType.GetHashCode());
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_0037;
		}
	}
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	return Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, ((*(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)UnBox(L_1, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	return Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     String.Equals(id, other.id) &&
		//     subsystemImplementationType == other.subsystemImplementationType;
		String_t* L_0 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8_AdjustorThunk (RuntimeObject * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	return Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m882D7B37B56316E3F303C2D0FE567F2A3200EABB (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___lhs0, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Equals(rhs);
		Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_m32020040DBB694BFA932EB9F3337323DB02C25C5 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___lhs0, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___rhs1, const RuntimeMethod* method)
{
	{
		// return !lhs.Equals(rhs);
		Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::get_nativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImageCinfo_get_nativeHandle_mAA33429DC514605299C7299B3FA58D6FF181F129 (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method)
{
	{
		// public int nativeHandle => m_NativeHandle;
		int32_t L_0 = __this->get_m_NativeHandle_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CameraImageCinfo_get_nativeHandle_mAA33429DC514605299C7299B3FA58D6FF181F129_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * _thisAdjusted = reinterpret_cast<CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *>(__this + _offset);
	return CameraImageCinfo_get_nativeHandle_mAA33429DC514605299C7299B3FA58D6FF181F129_inline(_thisAdjusted, method);
}
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::get_dimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  CameraImageCinfo_get_dimensions_mF825187AC7021EB0AC8B67D62C173CAF2C3F3E75 (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int dimensions => m_Dimensions;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_m_Dimensions_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  CameraImageCinfo_get_dimensions_mF825187AC7021EB0AC8B67D62C173CAF2C3F3E75_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * _thisAdjusted = reinterpret_cast<CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *>(__this + _offset);
	return CameraImageCinfo_get_dimensions_mF825187AC7021EB0AC8B67D62C173CAF2C3F3E75_inline(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::get_planeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImageCinfo_get_planeCount_m908994322F1F23572F94579C395EF075F520BEEA (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method)
{
	{
		// public int planeCount => m_PlaneCount;
		int32_t L_0 = __this->get_m_PlaneCount_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CameraImageCinfo_get_planeCount_m908994322F1F23572F94579C395EF075F520BEEA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * _thisAdjusted = reinterpret_cast<CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *>(__this + _offset);
	return CameraImageCinfo_get_planeCount_m908994322F1F23572F94579C395EF075F520BEEA_inline(_thisAdjusted, method);
}
// System.Double UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CameraImageCinfo_get_timestamp_mD46C187B596B91C5B2972547A981F690C5E8F57B (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method)
{
	{
		// public double timestamp => m_Timestamp;
		double L_0 = __this->get_m_Timestamp_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  double CameraImageCinfo_get_timestamp_mD46C187B596B91C5B2972547A981F690C5E8F57B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * _thisAdjusted = reinterpret_cast<CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *>(__this + _offset);
	return CameraImageCinfo_get_timestamp_mD46C187B596B91C5B2972547A981F690C5E8F57B_inline(_thisAdjusted, method);
}
// UnityEngine.XR.ARSubsystems.CameraImageFormat UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImageCinfo_get_format_mEAE51C8E4500B1BA39EAF59AB821DB63561ED1B0 (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method)
{
	{
		// public CameraImageFormat format => m_Format;
		int32_t L_0 = __this->get_m_Format_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CameraImageCinfo_get_format_mEAE51C8E4500B1BA39EAF59AB821DB63561ED1B0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * _thisAdjusted = reinterpret_cast<CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *>(__this + _offset);
	return CameraImageCinfo_get_format_mEAE51C8E4500B1BA39EAF59AB821DB63561ED1B0_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::.ctor(System.Int32,UnityEngine.Vector2Int,System.Int32,System.Double,UnityEngine.XR.ARSubsystems.CameraImageFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageCinfo__ctor_mD811DE31A50A88F4752816C83F29DCB091838735 (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, int32_t ___nativeHandle0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___dimensions1, int32_t ___planeCount2, double ___timestamp3, int32_t ___format4, const RuntimeMethod* method)
{
	{
		// this.m_NativeHandle = nativeHandle;
		int32_t L_0 = ___nativeHandle0;
		__this->set_m_NativeHandle_0(L_0);
		// this.m_Dimensions = dimensions;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_1 = ___dimensions1;
		__this->set_m_Dimensions_1(L_1);
		// this.m_PlaneCount = planeCount;
		int32_t L_2 = ___planeCount2;
		__this->set_m_PlaneCount_2(L_2);
		// this.m_Timestamp = timestamp;
		double L_3 = ___timestamp3;
		__this->set_m_Timestamp_3(L_3);
		// this.m_Format = format;
		int32_t L_4 = ___format4;
		__this->set_m_Format_4(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CameraImageCinfo__ctor_mD811DE31A50A88F4752816C83F29DCB091838735_AdjustorThunk (RuntimeObject * __this, int32_t ___nativeHandle0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___dimensions1, int32_t ___planeCount2, double ___timestamp3, int32_t ___format4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * _thisAdjusted = reinterpret_cast<CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *>(__this + _offset);
	CameraImageCinfo__ctor_mD811DE31A50A88F4752816C83F29DCB091838735(_thisAdjusted, ___nativeHandle0, ___dimensions1, ___planeCount2, ___timestamp3, ___format4, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::Equals(UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImageCinfo_Equals_m1D15CAC540169F284F58009C1CB79CECD4BEBD61 (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraImageCinfo_Equals_m1D15CAC540169F284F58009C1CB79CECD4BEBD61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	int32_t V_3 = 0;
	{
		// return (nativeHandle.Equals(other.nativeHandle) && dimensions.Equals(other.dimensions)
		//         && planeCount.Equals(other.planeCount) && timestamp.Equals(other.timestamp)
		//         && format.Equals(other.format));
		int32_t L_0 = CameraImageCinfo_get_nativeHandle_mAA33429DC514605299C7299B3FA58D6FF181F129_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = CameraImageCinfo_get_nativeHandle_mAA33429DC514605299C7299B3FA58D6FF181F129_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_007d;
		}
	}
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3 = CameraImageCinfo_get_dimensions_mF825187AC7021EB0AC8B67D62C173CAF2C3F3E75_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_1 = L_3;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4 = CameraImageCinfo_get_dimensions_mF825187AC7021EB0AC8B67D62C173CAF2C3F3E75_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)(&___other0), /*hidden argument*/NULL);
		bool L_5 = Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_6 = CameraImageCinfo_get_planeCount_m908994322F1F23572F94579C395EF075F520BEEA_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = CameraImageCinfo_get_planeCount_m908994322F1F23572F94579C395EF075F520BEEA_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)(&___other0), /*hidden argument*/NULL);
		bool L_8 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_0), L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007d;
		}
	}
	{
		double L_9 = CameraImageCinfo_get_timestamp_mD46C187B596B91C5B2972547A981F690C5E8F57B_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_2 = L_9;
		double L_10 = CameraImageCinfo_get_timestamp_mD46C187B596B91C5B2972547A981F690C5E8F57B_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)(&___other0), /*hidden argument*/NULL);
		bool L_11 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(&V_2), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_12 = CameraImageCinfo_get_format_mEAE51C8E4500B1BA39EAF59AB821DB63561ED1B0_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_3 = L_12;
		int32_t L_13 = CameraImageCinfo_get_format_mEAE51C8E4500B1BA39EAF59AB821DB63561ED1B0_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)(&___other0), /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(CameraImageFormat_t49B09207AE23B8011BF326475029755FE005533D_il2cpp_TypeInfo_var, &L_14);
		RuntimeObject * L_16 = Box(CameraImageFormat_t49B09207AE23B8011BF326475029755FE005533D_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_16);
		bool L_17 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_16, L_15);
		V_3 = *(int32_t*)UnBox(L_16);
		return L_17;
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool CameraImageCinfo_Equals_m1D15CAC540169F284F58009C1CB79CECD4BEBD61_AdjustorThunk (RuntimeObject * __this, CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * _thisAdjusted = reinterpret_cast<CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *>(__this + _offset);
	return CameraImageCinfo_Equals_m1D15CAC540169F284F58009C1CB79CECD4BEBD61(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImageCinfo_Equals_m496FE2CBBC5F7F0D7208D05892EF845EC4ED88D0 (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraImageCinfo_Equals_m496FE2CBBC5F7F0D7208D05892EF845EC4ED88D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ReferenceEquals(this, obj) || ((obj is CameraImageCinfo) && Equals((CameraImageCinfo)obj));
		CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  L_0 = (*(CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this);
		CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  L_1 = L_0;
		RuntimeObject * L_2 = Box(CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = ___obj0;
		if ((((RuntimeObject*)(RuntimeObject *)L_2) == ((RuntimeObject*)(RuntimeObject *)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject * L_4 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_5 = ___obj0;
		bool L_6 = CameraImageCinfo_Equals_m1D15CAC540169F284F58009C1CB79CECD4BEBD61((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, ((*(CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)UnBox(L_5, CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		return (bool)0;
	}

IL_0025:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool CameraImageCinfo_Equals_m496FE2CBBC5F7F0D7208D05892EF845EC4ED88D0_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * _thisAdjusted = reinterpret_cast<CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *>(__this + _offset);
	return CameraImageCinfo_Equals_m496FE2CBBC5F7F0D7208D05892EF845EC4ED88D0(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo,UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImageCinfo_op_Equality_mF13F393A5FACC397A80CF3EEB47D92453FB37570 (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  ___lhs0, CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(CameraImageCinfo lhs, CameraImageCinfo rhs) => lhs.Equals(rhs);
		CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  L_0 = ___rhs1;
		bool L_1 = CameraImageCinfo_Equals_m1D15CAC540169F284F58009C1CB79CECD4BEBD61((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo,UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImageCinfo_op_Inequality_mFDC8C86098B50859965B694505DFE38E0A7EC7DA (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  ___lhs0, CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(CameraImageCinfo lhs, CameraImageCinfo rhs) => !(lhs == rhs);
		CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  L_0 = ___lhs0;
		CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8  L_1 = ___rhs1;
		bool L_2 = CameraImageCinfo_op_Equality_mF13F393A5FACC397A80CF3EEB47D92453FB37570(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImageCinfo_GetHashCode_m6DC3794D26947F8C89D6DF45D4682AA32E6B3D5C (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	{
		// int hashCode = 486187739;
		// hashCode = (hashCode * 486187739) + nativeHandle.GetHashCode();
		int32_t L_0 = CameraImageCinfo_get_nativeHandle_mAA33429DC514605299C7299B3FA58D6FF181F129_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + dimensions.GetHashCode();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_2 = CameraImageCinfo_get_dimensions_mF825187AC7021EB0AC8B67D62C173CAF2C3F3E75_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector2Int_GetHashCode_mB963D0B9A29E161BC4B73F97AEAF2F843FC8EF71((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + planeCount.GetHashCode();
		int32_t L_4 = CameraImageCinfo_get_planeCount_m908994322F1F23572F94579C395EF075F520BEEA_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + timestamp.GetHashCode();
		double L_6 = CameraImageCinfo_get_timestamp_mD46C187B596B91C5B2972547A981F690C5E8F57B_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_2), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + ((int)format).GetHashCode();
		int32_t L_8 = CameraImageCinfo_get_format_mEAE51C8E4500B1BA39EAF59AB821DB63561ED1B0_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)((int32_t)486187739))), (int32_t)L_1)), (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9));
	}
}
IL2CPP_EXTERN_C  int32_t CameraImageCinfo_GetHashCode_m6DC3794D26947F8C89D6DF45D4682AA32E6B3D5C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * _thisAdjusted = reinterpret_cast<CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *>(__this + _offset);
	return CameraImageCinfo_GetHashCode_m6DC3794D26947F8C89D6DF45D4682AA32E6B3D5C(_thisAdjusted, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CameraImageCinfo_ToString_mFFF35D560345AA4225983C0CCA7A900127D9BE2C (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraImageCinfo_ToString_mFFF35D560345AA4225983C0CCA7A900127D9BE2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	int32_t V_3 = 0;
	{
		// return string.Format("nativeHandle: {0} dimensions:{1} planes:{2} timestamp:{3} format:{4}",
		//                      nativeHandle.ToString(), dimensions.ToString(), planeCount.ToString(),
		//                      timestamp.ToString(), format.ToString());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2 = CameraImageCinfo_get_nativeHandle_mAA33429DC514605299C7299B3FA58D6FF181F129_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_1;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_5 = CameraImageCinfo_get_dimensions_mF825187AC7021EB0AC8B67D62C173CAF2C3F3E75_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = Vector2Int_ToString_m7928A3CC56D9CAAB370F6B3EE797CED4BE9B9B20((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		int32_t L_8 = CameraImageCinfo_get_planeCount_m908994322F1F23572F94579C395EF075F520BEEA_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_7;
		double L_11 = CameraImageCinfo_get_timestamp_mD46C187B596B91C5B2972547A981F690C5E8F57B_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_2 = L_11;
		String_t* L_12 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_10;
		int32_t L_14 = CameraImageCinfo_get_format_mEAE51C8E4500B1BA39EAF59AB821DB63561ED1B0_inline((CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *)__this, /*hidden argument*/NULL);
		V_3 = L_14;
		RuntimeObject * L_15 = Box(CameraImageFormat_t49B09207AE23B8011BF326475029755FE005533D_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		V_3 = *(int32_t*)UnBox(L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_16);
		String_t* L_17 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral58E5CEADA2059EE9E3025B80075ADE0FEECDE744, L_13, /*hidden argument*/NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C  String_t* CameraImageCinfo_ToString_mFFF35D560345AA4225983C0CCA7A900127D9BE2C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * _thisAdjusted = reinterpret_cast<CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 *>(__this + _offset);
	return CameraImageCinfo_ToString_mFFF35D560345AA4225983C0CCA7A900127D9BE2C(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::get_dataPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr dataPtr => m_DataPtr;
		intptr_t L_0 = __this->get_m_DataPtr_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::get_dataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public int dataLength => m_DataLength;
		int32_t L_0 = __this->get_m_DataLength_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::get_rowStride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public int rowStride => m_RowStride;
		int32_t L_0 = __this->get_m_RowStride_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::get_pixelStride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public int pixelStride => m_PixelStride;
		int32_t L_0 = __this->get_m_PixelStride_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::.ctor(System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImagePlaneCinfo__ctor_m4D60A5611661F51C4B78AEABE6482BD31951D2CB (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, intptr_t ___dataPtr0, int32_t ___dataLength1, int32_t ___rowStride2, int32_t ___pixelStride3, const RuntimeMethod* method)
{
	{
		// this.m_DataPtr = dataPtr;
		intptr_t L_0 = ___dataPtr0;
		__this->set_m_DataPtr_0((intptr_t)L_0);
		// this.m_DataLength = dataLength;
		int32_t L_1 = ___dataLength1;
		__this->set_m_DataLength_1(L_1);
		// this.m_RowStride = rowStride;
		int32_t L_2 = ___rowStride2;
		__this->set_m_RowStride_2(L_2);
		// this.m_PixelStride = pixelStride;
		int32_t L_3 = ___pixelStride3;
		__this->set_m_PixelStride_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CameraImagePlaneCinfo__ctor_m4D60A5611661F51C4B78AEABE6482BD31951D2CB_AdjustorThunk (RuntimeObject * __this, intptr_t ___dataPtr0, int32_t ___dataLength1, int32_t ___rowStride2, int32_t ___pixelStride3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	CameraImagePlaneCinfo__ctor_m4D60A5611661F51C4B78AEABE6482BD31951D2CB(_thisAdjusted, ___dataPtr0, ___dataLength1, ___rowStride2, ___pixelStride3, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::Equals(UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return (dataPtr.Equals(other.dataPtr) && dataLength.Equals(other.dataLength)
		//         && rowStride.Equals(other.rowStride) && pixelStride.Equals(other.pixelStride));
		intptr_t L_0 = CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		intptr_t L_1 = CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)(&___other0), /*hidden argument*/NULL);
		intptr_t L_2 = L_1;
		RuntimeObject * L_3 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_2);
		bool L_4 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&V_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_5 = CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)(&___other0), /*hidden argument*/NULL);
		bool L_7 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_1), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_8 = CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)(&___other0), /*hidden argument*/NULL);
		bool L_10 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_1), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_11 = CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12 = CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)(&___other0), /*hidden argument*/NULL);
		bool L_13 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_1), L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0060:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101_AdjustorThunk (RuntimeObject * __this, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImagePlaneCinfo_Equals_mA584B5FBAB613A1B7A83B1C0413089390EFFCBBD (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraImagePlaneCinfo_Equals_mA584B5FBAB613A1B7A83B1C0413089390EFFCBBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ReferenceEquals(this, obj) || ((obj is CameraImagePlaneCinfo) && Equals((CameraImagePlaneCinfo)obj));
		CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  L_0 = (*(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this);
		CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  L_1 = L_0;
		RuntimeObject * L_2 = Box(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = ___obj0;
		if ((((RuntimeObject*)(RuntimeObject *)L_2) == ((RuntimeObject*)(RuntimeObject *)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject * L_4 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_5 = ___obj0;
		bool L_6 = CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, ((*(CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)UnBox(L_5, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		return (bool)0;
	}

IL_0025:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool CameraImagePlaneCinfo_Equals_mA584B5FBAB613A1B7A83B1C0413089390EFFCBBD_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_Equals_mA584B5FBAB613A1B7A83B1C0413089390EFFCBBD(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo,UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImagePlaneCinfo_op_Equality_mD2D9CB2269AA227922D85404DE0D39FD1974FF1D (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  ___lhs0, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(CameraImagePlaneCinfo lhs, CameraImagePlaneCinfo rhs) => lhs.Equals(rhs);
		CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  L_0 = ___rhs1;
		bool L_1 = CameraImagePlaneCinfo_Equals_mA63A2FC92BE0863CE255A5540AE12B6A32C31101((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo,UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraImagePlaneCinfo_op_Inequality_m01976B57D3510F5DA25FFF587CBD9E0F1CEF2BE6 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  ___lhs0, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(CameraImagePlaneCinfo lhs, CameraImagePlaneCinfo rhs) => !(lhs == rhs);
		CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  L_0 = ___lhs0;
		CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7  L_1 = ___rhs1;
		bool L_2 = CameraImagePlaneCinfo_op_Equality_mD2D9CB2269AA227922D85404DE0D39FD1974FF1D(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_GetHashCode_mD22746F20EA784A20EE4502A78218457A48125E3 (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// int hashCode = 486187739;
		// hashCode = (hashCode * 486187739) + dataPtr.GetHashCode();
		intptr_t L_0 = CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		int32_t L_1 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + dataLength.GetHashCode();
		int32_t L_2 = CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + rowStride.GetHashCode();
		int32_t L_4 = CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + pixelStride.GetHashCode();
		int32_t L_6 = CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)((int32_t)486187739))), (int32_t)L_1)), (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7));
	}
}
IL2CPP_EXTERN_C  int32_t CameraImagePlaneCinfo_GetHashCode_mD22746F20EA784A20EE4502A78218457A48125E3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_GetHashCode_mD22746F20EA784A20EE4502A78218457A48125E3(_thisAdjusted, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CameraImagePlaneCinfo_ToString_m2B60D32513350E0AE53B003B7F3E94F75B3D86AD (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraImagePlaneCinfo_ToString_m2B60D32513350E0AE53B003B7F3E94F75B3D86AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return string.Format("dataPtr: {0} length:{1} rowStride:{2} pixelStride:{3}", dataPtr.ToString(),
		//                      dataLength.ToString(), rowStride.ToString(), pixelStride.ToString());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		intptr_t L_2 = CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		String_t* L_3 = IntPtr_ToString_mC499BFB66CB492853717FFACA63599701FC1E91C((intptr_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_1;
		int32_t L_5 = CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		int32_t L_8 = CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_8;
		String_t* L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_7;
		int32_t L_11 = CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline((CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *)__this, /*hidden argument*/NULL);
		V_1 = L_11;
		String_t* L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralF20EFFC62AFBE813D48D4D9EAF1FF59EFA14655F, L_10, /*hidden argument*/NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  String_t* CameraImagePlaneCinfo_ToString_m2B60D32513350E0AE53B003B7F3E94F75B3D86AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * _thisAdjusted = reinterpret_cast<CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 *>(__this + _offset);
	return CameraImagePlaneCinfo_ToString_m2B60D32513350E0AE53B003B7F3E94F75B3D86AD(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnImageRequestCompleteDelegate_t9194AD998445A53935B7F68B9977EC84956E25B3 (OnImageRequestCompleteDelegate_t9194AD998445A53935B7F68B9977EC84956E25B3 * __this, int32_t ___status0, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6  ___conversionParams1, intptr_t ___dataPtr2, int32_t ___dataLength3, intptr_t ___context4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6 , intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);

}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_OnImageRequestCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnImageRequestCompleteDelegate__ctor_m89ED8A25EE11B095716FEC4E6DA4F4CD2DA7D213 (OnImageRequestCompleteDelegate_t9194AD998445A53935B7F68B9977EC84956E25B3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_OnImageRequestCompleteDelegate::Invoke(UnityEngine.XR.ARSubsystems.AsyncCameraImageConversionStatus,UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnImageRequestCompleteDelegate_Invoke_m653D69C4C97B3E424BB0FEE02E82D79EDE1D37F7 (OnImageRequestCompleteDelegate_t9194AD998445A53935B7F68B9977EC84956E25B3 * __this, int32_t ___status0, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6  ___conversionParams1, intptr_t ___dataPtr2, int32_t ___dataLength3, intptr_t ___context4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6 , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6 , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< int32_t, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6 , intptr_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);
					else
						GenericVirtActionInvoker5< int32_t, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6 , intptr_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< int32_t, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6 , intptr_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);
					else
						VirtActionInvoker5< int32_t, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6 , intptr_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6 , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___status0) - 1), ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6 , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___status0) - 1), ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6 , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARSubsystems.XRCameraSubsystem_OnImageRequestCompleteDelegate::BeginInvoke(UnityEngine.XR.ARSubsystems.AsyncCameraImageConversionStatus,UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams,System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnImageRequestCompleteDelegate_BeginInvoke_m324742C0A7360C58544FFD0B8AF04F502273E774 (OnImageRequestCompleteDelegate_t9194AD998445A53935B7F68B9977EC84956E25B3 * __this, int32_t ___status0, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6  ___conversionParams1, intptr_t ___dataPtr2, int32_t ___dataLength3, intptr_t ___context4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnImageRequestCompleteDelegate_BeginInvoke_m324742C0A7360C58544FFD0B8AF04F502273E774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(AsyncCameraImageConversionStatus_tC34E38DB385CB342CABE7CF1392C99943BE0CBF5_il2cpp_TypeInfo_var, &___status0);
	__d_args[1] = Box(XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6_il2cpp_TypeInfo_var, &___conversionParams1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dataPtr2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___dataLength3);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_OnImageRequestCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnImageRequestCompleteDelegate_EndInvoke_m28FF46D1A26CC48F8A7BB6203CE0D9193F34E5B8 (OnImageRequestCompleteDelegate_t9194AD998445A53935B7F68B9977EC84956E25B3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Material UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::get_cameraMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Provider_get_cameraMaterial_mB2216E3065B59A4316FE44269B7F72452FC91CAF (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method)
{
	{
		// public virtual Material cameraMaterial => null;
		return (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::get_permissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_permissionGranted_m81B4D509343689A6B7E05DCE7DC4F23CDCBFFC06 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool permissionGranted => false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::get_invertCulling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_invertCulling_m1D0C3A5DE10FC21E76F36B206D36279B31DAAF59 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool invertCulling => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m21B1CE84F39D9289CD6B0463FEFE123035A03595 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mBC0382A741C3D457CE9306E73C78E31ABE428AC0 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m811EEFB83BCE7A7F55B8126A0CA06F4A0081FF23 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Destroy() { }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::TryGetFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetFrame_m9BDEADBA9AB8CA56E51906D409DADAE31634631E (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18  ___cameraParams0, XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 * ___cameraFrame1, const RuntimeMethod* method)
{
	{
		// cameraFrame = default(XRCameraFrame);
		XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 * L_0 = ___cameraFrame1;
		il2cpp_codegen_initobj(L_0, sizeof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 ));
		// return false;
		return (bool)0;
	}
}
// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::get_cameraFocusMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_cameraFocusMode_mBF511D27FC2675639B861A1600D63914B5BB0526 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method)
{
	{
		// get => CameraFocusMode.Fixed;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::set_cameraFocusMode(UnityEngine.XR.ARSubsystems.CameraFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_cameraFocusMode_mDFAE0ECF32E88907CF5C91CEAE7EB1215167E47F (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::TrySetLightEstimationMode(UnityEngine.XR.ARSubsystems.LightEstimationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TrySetLightEstimationMode_m03D4A36032887E084004D356682F1FFAC858132C (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, int32_t ___lightEstimationMode0, const RuntimeMethod* method)
{
	{
		// public virtual bool TrySetLightEstimationMode(LightEstimationMode lightEstimationMode) => false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::TryGetIntrinsics(UnityEngine.XR.ARSubsystems.XRCameraIntrinsics&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetIntrinsics_m173355798904E72FC3D80477AE5426A54ABC95BF (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD * ___cameraIntrinsics0, const RuntimeMethod* method)
{
	{
		// cameraIntrinsics = default(XRCameraIntrinsics);
		XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD * L_0 = ___cameraIntrinsics0;
		il2cpp_codegen_initobj(L_0, sizeof(XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD ));
		// return false;
		return (bool)0;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration> UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::GetConfigurations(UnityEngine.XR.ARSubsystems.XRCameraConfiguration,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  Provider_GetConfigurations_m528095C5BA179D1FD2CF679EE89B6B1C216E6834 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___defaultCameraConfiguration0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetConfigurations_m528095C5BA179D1FD2CF679EE89B6B1C216E6834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NativeArray<XRCameraConfiguration>(0, allocator);
		int32_t L_0 = ___allocator1;
		NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m55427120ACDC71253ECC88FB9FE3C72B9B8DC920((&L_1), 0, L_0, 1, /*hidden argument*/NativeArray_1__ctor_m55427120ACDC71253ECC88FB9FE3C72B9B8DC920_RuntimeMethod_var);
		return L_1;
	}
}
// System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration> UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::get_currentConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  Provider_get_currentConfiguration_mD21D1EB06936263616664DB5D8A1698419E98AE2 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method)
{
	Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get => null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C ));
		Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::set_currentConfiguration(System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_currentConfiguration_m99D438CC1ABE5E92215CA7FA369BE61A7652ED66 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_set_currentConfiguration_m99D438CC1ABE5E92215CA7FA369BE61A7652ED66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => throw new NotSupportedException("setting current camera configuration is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral7C870909849A9D8B2B4A755041CC27EB6D76483B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_set_currentConfiguration_m99D438CC1ABE5E92215CA7FA369BE61A7652ED66_RuntimeMethod_var);
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor> UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::GetTextureDescriptors(UnityEngine.XR.ARSubsystems.XRTextureDescriptor,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952  Provider_GetTextureDescriptors_mB6ED5AD6E33BCFE3E70916A227CC81541307C68A (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___defaultDescriptor0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetTextureDescriptors_mB6ED5AD6E33BCFE3E70916A227CC81541307C68A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NativeArray<XRTextureDescriptor>(0, allocator);
		int32_t L_0 = ___allocator1;
		NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952  L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A((&L_1), 0, L_0, 1, /*hidden argument*/NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::GetMaterialKeywords(System.Collections.Generic.List`1<System.String>&,System.Collections.Generic.List`1<System.String>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_GetMaterialKeywords_m160DF6037C4E84C194CC5D3564184D4DEE8A48E4 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** ___enabledKeywords0, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** ___disabledKeywords1, const RuntimeMethod* method)
{
	{
		// enabledKeywords = null;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** L_0 = ___enabledKeywords0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// disabledKeywords = null;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** L_1 = ___disabledKeywords1;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::TryAcquireLatestImage(UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAcquireLatestImage_mF4CAC046B6B0FF86E69236F24661F5C708205E24 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * ___cameraImageCinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_TryAcquireLatestImage_mF4CAC046B6B0FF86E69236F24661F5C708205E24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("getting camera image is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral66302D2613F26AFE177C77015981C7FA27A369BB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_TryAcquireLatestImage_mF4CAC046B6B0FF86E69236F24661F5C708205E24_RuntimeMethod_var);
	}
}
// UnityEngine.XR.ARSubsystems.AsyncCameraImageConversionStatus UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::GetAsyncRequestStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_GetAsyncRequestStatus_m2D96A257FFAB2782C90CB324939ED4AAA67AF901 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, int32_t ___requestId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetAsyncRequestStatus_m2D96A257FFAB2782C90CB324939ED4AAA67AF901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_GetAsyncRequestStatus_m2D96A257FFAB2782C90CB324939ED4AAA67AF901_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_DisposeImage_m5E9ECDB6F4EFABE5128E5C073FF773FADA6E77FD (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_DisposeImage_m5E9ECDB6F4EFABE5128E5C073FF773FADA6E77FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_DisposeImage_m5E9ECDB6F4EFABE5128E5C073FF773FADA6E77FD_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::DisposeAsyncRequest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_DisposeAsyncRequest_m55540654AA9939077AEBE3B1F0D8789B21E123FB (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, int32_t ___requestId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_DisposeAsyncRequest_m55540654AA9939077AEBE3B1F0D8789B21E123FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_DisposeAsyncRequest_m55540654AA9939077AEBE3B1F0D8789B21E123FB_RuntimeMethod_var);
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::TryGetPlane(System.Int32,System.Int32,UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImagePlaneCinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetPlane_m8590F9C7FD4F42B71DBF1518294C95F17BEF5C51 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, int32_t ___nativeHandle0, int32_t ___planeIndex1, CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * ___planeCinfo2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_TryGetPlane_m8590F9C7FD4F42B71DBF1518294C95F17BEF5C51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_TryGetPlane_m8590F9C7FD4F42B71DBF1518294C95F17BEF5C51_RuntimeMethod_var);
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::NativeHandleValid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_NativeHandleValid_m862E87AE9A7D1717C9AFA7559ADB3B3112535C6A (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_NativeHandleValid_m862E87AE9A7D1717C9AFA7559ADB3B3112535C6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_NativeHandleValid_m862E87AE9A7D1717C9AFA7559ADB3B3112535C6A_RuntimeMethod_var);
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::TryGetConvertedDataSize(System.Int32,UnityEngine.Vector2Int,UnityEngine.TextureFormat,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetConvertedDataSize_m629186A29644B2C721EC25EDA37B70107148C79B (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, int32_t ___nativeHandle0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___dimensions1, int32_t ___format2, int32_t* ___size3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_TryGetConvertedDataSize_m629186A29644B2C721EC25EDA37B70107148C79B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_TryGetConvertedDataSize_m629186A29644B2C721EC25EDA37B70107148C79B_RuntimeMethod_var);
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::TryConvert(System.Int32,UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryConvert_m1503528DCB5E893D74210C7DD24E3E380FEA08A4 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, int32_t ___nativeHandle0, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6  ___conversionParams1, intptr_t ___destinationBuffer2, int32_t ___bufferLength3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_TryConvert_m1503528DCB5E893D74210C7DD24E3E380FEA08A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_TryConvert_m1503528DCB5E893D74210C7DD24E3E380FEA08A4_RuntimeMethod_var);
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::ConvertAsync(System.Int32,UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_ConvertAsync_m99E7F47A422963B99B2EB9ABC0272695A7AC7647 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, int32_t ___nativeHandle0, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6  ___conversionParams1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_ConvertAsync_m99E7F47A422963B99B2EB9ABC0272695A7AC7647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_ConvertAsync_m99E7F47A422963B99B2EB9ABC0272695A7AC7647_RuntimeMethod_var);
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::TryGetAsyncRequestData(System.Int32,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetAsyncRequestData_m27ED8D748271A517B7C606EE7D9AEA8D59184837 (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, int32_t ___requestId0, intptr_t* ___dataPtr1, int32_t* ___dataLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_TryGetAsyncRequestData_m27ED8D748271A517B7C606EE7D9AEA8D59184837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_TryGetAsyncRequestData_m27ED8D748271A517B7C606EE7D9AEA8D59184837_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::ConvertAsync(System.Int32,UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams,UnityEngine.XR.ARSubsystems.XRCameraSubsystem_OnImageRequestCompleteDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_ConvertAsync_m06D325E90BF24673298C3E9BEF0BE035437B6DFD (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, int32_t ___nativeHandle0, XRCameraImageConversionParams_t1EEE9A7D1225B26B0D9AACC48B620238C02B1FA6  ___conversionParams1, OnImageRequestCompleteDelegate_t9194AD998445A53935B7F68B9977EC84956E25B3 * ___callback2, intptr_t ___context3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_ConvertAsync_m06D325E90BF24673298C3E9BEF0BE035437B6DFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_ConvertAsync_m06D325E90BF24673298C3E9BEF0BE035437B6DFD_RuntimeMethod_var);
	}
}
// UnityEngine.Material UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::CreateCameraMaterial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, String_t* ___cameraShaderName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * G_B2_0 = NULL;
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * G_B1_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B4_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B3_0 = NULL;
	{
		// var shader = Shader.Find(cameraShaderName);
		String_t* L_0 = ___cameraShaderName0;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(L_0, /*hidden argument*/NULL);
		// if (shader == null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0025;
		}
	}
	{
		// throw new InvalidOperationException($"Could not find shader named '{cameraShaderName}' required "
		//                                     + $"for video overlay on camera subsystem.");
		String_t* L_4 = ___cameraShaderName0;
		String_t* L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral704C51A0DAD6B36AE5557F6EC82739898E4BFB61, L_4, _stringLiteral489BDF1FA9922AB5F829F5BE893907E419364DF4, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C_RuntimeMethod_var);
	}

IL_0025:
	{
		// Material material = new Material(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_7, G_B2_0, /*hidden argument*/NULL);
		// if (material == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		if (!L_9)
		{
			G_B4_0 = L_8;
			goto IL_0049;
		}
	}
	{
		// throw new InvalidOperationException($"Could not create a material for shader named "
		//                                     + $"'{cameraShaderName}' required for video overlay on camera "
		//                                     + $"subsystem.");
		String_t* L_10 = ___cameraShaderName0;
		String_t* L_11 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralCD0C03FFF40E6F1D242821369D83EC4658F16D35, L_10, _stringLiteral489BDF1FA9922AB5F829F5BE893907E419364DF4, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_12 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C_RuntimeMethod_var);
	}

IL_0049:
	{
		// return material;
		return G_B4_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mA61CB0610059584FC8190F2C54D845C7612D82BE (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_mCFBE8FADD9A70911E16A985BA4CFE55A5D305F97 (Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mE83290B18BBF745A739EFBB8985EE8F6F9ACEF79 (Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m4594AD5BE5A869ECEDF56161272A18E5182B4E58 (Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Destroy() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1A368071CFCB91BC39B9760441A777FE20F86A57 (Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_pinvoke(const Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1& unmarshaled, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___implementationType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'implementationType' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___implementationType_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_pinvoke_back(const Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke& marshaled, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1& unmarshaled)
{
	Exception_t* ___implementationType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'implementationType' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___implementationType_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_pinvoke_cleanup(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_com(const Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1& unmarshaled, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com& marshaled)
{
	Exception_t* ___implementationType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'implementationType' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___implementationType_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_com_back(const Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com& marshaled, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1& unmarshaled)
{
	Exception_t* ___implementationType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'implementationType' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___implementationType_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_com_cleanup(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::get_supportsFeaturePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// get { return (capabilities & Capabilities.FeaturePoints) != 0; }
		int32_t L_0 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// capabilities |= Capabilities.FeaturePoints;
		int32_t L_1 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_1|(int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0012:
	{
		// capabilities &= ~Capabilities.FeaturePoints;
		int32_t L_2 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2))), /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::get_supportsConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// get { return (capabilities & Capabilities.Confidence) != 0; }
		int32_t L_0 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// capabilities |= Capabilities.Confidence;
		int32_t L_1 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_1|(int32_t)2)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0012:
	{
		// capabilities &= ~Capabilities.Confidence;
		int32_t L_2 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-3))), /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::get_supportsUniqueIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// get { return (capabilities & Capabilities.UniqueIds) != 0; }
		int32_t L_0 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// capabilities |= Capabilities.UniqueIds;
		int32_t L_1 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_1|(int32_t)4)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0012:
	{
		// capabilities &= ~Capabilities.UniqueIds;
		int32_t L_2 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-5))), /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::get_capabilities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// Capabilities capabilities { get; set; }
		int32_t L_0 = __this->get_U3CcapabilitiesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::set_capabilities(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// Capabilities capabilities { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcapabilitiesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return capabilities == other.capabilities && id.Equals(other.id) && implementationType == other.implementationType;
		int32_t L_0 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_2 = __this->get_id_0();
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_3 = ___other0;
		String_t* L_4 = L_3.get_id_0();
		NullCheck(L_2);
		bool L_5 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		Type_t * L_6 = __this->get_implementationType_1();
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_7 = ___other0;
		Type_t * L_8 = L_7.get_implementationType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0034:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781_AdjustorThunk (RuntimeObject * __this, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((*(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)UnBox(L_1, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m93DAAACF242CBA5B8EE758CE4E04BCCF51639860 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hashCode = id.GetHashCode();
		String_t* L_0 = __this->get_id_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hashCode = (hashCode * 486187739) + implementationType.GetHashCode();
		Type_t * L_2 = __this->get_implementationType_1();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hashCode = (hashCode * 486187739) + ((int)capabilities).GetHashCode();
		int32_t L_4 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m93DAAACF242CBA5B8EE758CE4E04BCCF51639860_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	return Cinfo_GetHashCode_m93DAAACF242CBA5B8EE758CE4E04BCCF51639860(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_mA75B82ED3ACE6AAEE055A39F9553A8C2B980FDDA (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___lhs0, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Equals(rhs);
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_mDC7FA4BBBEB0235BB1844025B363D9161733814D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___lhs0, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___rhs1, const RuntimeMethod* method)
{
	{
		// return !lhs.Equals(rhs);
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m62290C9881C68625B81DECDDC7E15B483B07C71F (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mA1B1B9394F83424059541CBBC7D9317D341E58BC (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_mD7A600C4C317E57FE4327D0B30A0128152ECAA6F (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider::SetAutomaticPlacement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_SetAutomaticPlacement_m4911FE87C4FCB867A50DD09C35F81D0CA5781F0F (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_SetAutomaticPlacement_m4911FE87C4FCB867A50DD09C35F81D0CA5781F0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("automatic placement of environment probes is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, _stringLiteral43CF1A394DF36BF047EE89F7BFA26227D4379BFB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Provider_SetAutomaticPlacement_m4911FE87C4FCB867A50DD09C35F81D0CA5781F0F_RuntimeMethod_var);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider::TrySetEnvironmentTextureHDREnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TrySetEnvironmentTextureHDREnabled_mB69708ABD17881CD9BE7AE2067AC85A2548CF9FE (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_TrySetEnvironmentTextureHDREnabled_mB69708ABD17881CD9BE7AE2067AC85A2548CF9FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("HDR environment textures are not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, _stringLiteralF888230443F7BB68D49D53BBE56D2A722FDD6CA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Provider_TrySetEnvironmentTextureHDREnabled_mB69708ABD17881CD9BE7AE2067AC85A2548CF9FE_RuntimeMethod_var);
	}

IL_000e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider::TryAddEnvironmentProbe(UnityEngine.Pose,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.XR.ARSubsystems.XREnvironmentProbe&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddEnvironmentProbe_m3290B8D160B758811040A94F335843B1665618D5 (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size2, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * ___environmentProbe3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_TryAddEnvironmentProbe_m3290B8D160B758811040A94F335843B1665618D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("manual placement of environment probes is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral49851190ED9FA7B5B16CED19B807FDDAA864FEE9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_TryAddEnvironmentProbe_m3290B8D160B758811040A94F335843B1665618D5_RuntimeMethod_var);
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider::RemoveEnvironmentProbe(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_RemoveEnvironmentProbe_m1C8E9F616E2D1F98ECF86A3D6101B9A7ACB949D8 (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_RemoveEnvironmentProbe_m1C8E9F616E2D1F98ECF86A3D6101B9A7ACB949D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("removal of environment probes is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral69848EA3811CFA33C6D149D0D7D3E7BB386BD641, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_RemoveEnvironmentProbe_m1C8E9F616E2D1F98ECF86A3D6101B9A7ACB949D8_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m82E278812C6826F3F89A708912491AB72058B700 (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRFaceSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m395EEE5D5B9BE1A33158D173B4B7DACF41C8C938 (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mAB58A39BD4C2326964344960446DBD1BF063443B (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m536FBA3A0D0B75C42EB71F58F973761BB7802C6F (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Destroy() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceSubsystem_Provider::GetFaceMesh(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,UnityEngine.XR.ARSubsystems.XRFaceMesh&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_GetFaceMesh_m24F6E73C1A2C77979653AB19C8EE8EF939D80182 (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___faceId0, int32_t ___allocator1, XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 * ___faceMesh2, const RuntimeMethod* method)
{
	{
		// faceMesh.Dispose();
		XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 * L_0 = ___faceMesh2;
		XRFaceMesh_Dispose_m84478F08EEB3D131E0E7785CF4195D424B94543E((XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 *)L_0, /*hidden argument*/NULL);
		// faceMesh = default(XRFaceMesh);
		XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 * L_1 = ___faceMesh2;
		il2cpp_codegen_initobj(L_1, sizeof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 ));
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRFaceSubsystem_Provider::get_supportedFaceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_supportedFaceCount_m65269094A72BB234E7EF96ADEBF1EDB903FF5DEC (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, const RuntimeMethod* method)
{
	{
		// public virtual int supportedFaceCount => 1;
		return 1;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRFaceSubsystem_Provider::get_maximumFaceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_maximumFaceCount_mD22F37B8A4F26737C877AC4BBA3ECA7699F0DC12 (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, const RuntimeMethod* method)
{
	{
		// get => 1;
		return 1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceSubsystem_Provider::set_maximumFaceCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_maximumFaceCount_mC01823514E5294220C5C1FE2E3A6E11A355D1FF4 (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_set_maximumFaceCount_mC01823514E5294220C5C1FE2E3A6E11A355D1FF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (maximumFaceCount < 1)
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider::get_maximumFaceCount() */, __this);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("value", "Must track at least one face. Call Stop() if you wish to stop face tracking.");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_1, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, _stringLiteral26548CA46A8BBAF979FA375FE01C8EDF043E08D2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Provider_set_maximumFaceCount_mC01823514E5294220C5C1FE2E3A6E11A355D1FF4_RuntimeMethod_var);
	}

IL_0019:
	{
		// if (maximumFaceCount > 1)
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider::get_maximumFaceCount() */, __this);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		// throw new NotSupportedException("This subsystem does not support multiple faces.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_3 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_3, _stringLiteralC0B4B38DF46ED4D03D7C485E35630F8DE8B07040, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Provider_set_maximumFaceCount_mC01823514E5294220C5C1FE2E3A6E11A355D1FF4_RuntimeMethod_var);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mD36F52D0D0CF48E1C950DAE67246AB8C42498DE5 (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_mFF1861183A789E6742399769879112EA01866AE8 (Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Destroy() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem_Provider::set_maxNumberOfMovingImages(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_maxNumberOfMovingImages_m53009F3A682E6213EC096C7E59879B43D2A37052 (Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_set_maxNumberOfMovingImages_m53009F3A682E6213EC096C7E59879B43D2A37052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => throw new NotSupportedException("This subsystem does not track moving images.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral1399697DAB4124C76C3449E6CBB1E28BB1C2F2A1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_set_maxNumberOfMovingImages_m53009F3A682E6213EC096C7E59879B43D2A37052_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mE0C779A245EE703B26578F529ABFD6F18E002AC0 (Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_pinvoke(const Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32& unmarshaled, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_pinvoke_back(const Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke& marshaled, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_pinvoke_cleanup(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_com(const Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32& unmarshaled, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_com_back(const Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com& marshaled, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_com_cleanup(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::get_supportsMovingImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = __this->get_U3CsupportsMovingImagesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::set_supportsMovingImages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMovingImagesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::get_requiresPhysicalImageDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = __this->get_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::set_requiresPhysicalImageDimensions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::get_supportsMutableLibrary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = __this->get_U3CsupportsMutableLibraryU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::set_supportsMutableLibrary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMutableLibraryU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var hashCode = id == null ? 0 : id.GetHashCode();
		String_t* L_0 = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		// hashCode = hashCode * 486187739 + (subsystemImplementationType == null ? 0 : subsystemImplementationType.GetHashCode());
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_0037;
		}
	}
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// hashCode = hashCode * 486187739 + supportsMovingImages.GetHashCode();
		bool L_7 = Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + requiresPhysicalImageDimensions.GetHashCode();
		bool L_9 = Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + supportsMutableLibrary.GetHashCode();
		bool L_11 = Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)), (int32_t)((int32_t)486187739))), (int32_t)L_8)), (int32_t)((int32_t)486187739))), (int32_t)L_10)), (int32_t)((int32_t)486187739))), (int32_t)L_12));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     (id == other.id) &&
		//     (subsystemImplementationType == subsystemImplementationType) &&
		//     (supportsMovingImages == other.supportsMovingImages) &&
		//     (requiresPhysicalImageDimensions == other.requiresPhysicalImageDimensions) &&
		//     (supportsMutableLibrary == other.supportsMutableLibrary);
		String_t* L_0 = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		bool L_6 = Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		bool L_7 = Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0055;
		}
	}
	{
		bool L_8 = Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		bool L_9 = Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0055;
		}
	}
	{
		bool L_10 = Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		bool L_11 = Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
	}

IL_0055:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1_AdjustorThunk (RuntimeObject * __this, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, ((*(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)UnBox(L_1, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	return Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_mA2289980F50CD4956B0C31B5435FD74C1A901682 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___lhs0, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_m41BFCC878B3250FA86DE66CC1437AB0CFBB4EB6E (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___lhs0, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
		Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m87941DE83E14805DCF13DEE19E7AA5FB74ACAD25 (Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mC0D03B5AF99CFEE79D248D644DB290531E2C6F7C (Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m8D0A213802FBA41AE1087A0E013D7FEC21F0B41E (Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m29C158581A2B8BF6DE3F03DDACC1A2F8FFB1F875 (Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m6C9A6D7BDB81A11B9BFFC5AC74552014CC45A4E5 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mFBA6C8AF38C26E238CB992818B53C6DD36072580 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m16EF8081E352A65643BA348BCE8DBDFF49248459 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Destroy() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_Provider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_GetBoundary_mFEC076BA5F9EAEFB5CFD36A8A690CD6B9449A45A (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___boundary2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetBoundary_mFEC076BA5F9EAEFB5CFD36A8A690CD6B9449A45A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("Boundary vertices are not supported.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral16B03B9B09A75749753D1BD8C49C3482ED00598A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_GetBoundary_mFEC076BA5F9EAEFB5CFD36A8A690CD6B9449A45A_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_Provider::set_planeDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_planeDetectionMode_m1EE2D7C7681373E5A69DC7E5E4961B30FB1AD2F9 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mDEDB208301BBA3CC96FFF2DA6AC90F5D241CE524 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_pinvoke(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_pinvoke_back(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke& marshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_pinvoke_cleanup(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_com(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_com_back(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com& marshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_com_cleanup(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_supportsHorizontalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_supportsVerticalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_supportsArbitraryPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_supportsBoundaryVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = __this->get_U3CsupportsBoundaryVerticesU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::get_supportsClassification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = __this->get_U3CsupportsClassificationU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     id.Equals(other.id) &&
		//     (subsystemImplementationType == other.subsystemImplementationType) &&
		//     (supportsHorizontalPlaneDetection == other.supportsHorizontalPlaneDetection) &&
		//     (supportsVerticalPlaneDetection == other.supportsVerticalPlaneDetection) &&
		//     (supportsArbitraryPlaneDetection == other.supportsArbitraryPlaneDetection) &&
		//     (supportsClassification == other.supportsClassification) &&
		//     (supportsBoundaryVertices == other.supportsBoundaryVertices);
		String_t* L_0 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0074;
		}
	}
	{
		bool L_6 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_7 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0074;
		}
	}
	{
		bool L_8 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_9 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0074;
		}
	}
	{
		bool L_10 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_11 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0074;
		}
	}
	{
		bool L_12 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_13 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0074;
		}
	}
	{
		bool L_14 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_15 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC_AdjustorThunk (RuntimeObject * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, ((*(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)UnBox(L_1, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// var hashCode = id.GetHashCode();
		String_t* L_0 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hashCode = (hashCode * 486187739) + subsystemImplementationType.GetHashCode();
		Type_t * L_2 = Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hashCode = (hashCode * 486187739) + supportsHorizontalPlaneDetection.GetHashCode();
		bool L_4 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsVerticalPlaneDetection.GetHashCode();
		bool L_6 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsArbitraryPlaneDetection.GetHashCode();
		bool L_8 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsBoundaryVertices.GetHashCode();
		bool L_10 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsClassification.GetHashCode();
		bool L_12 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11)), (int32_t)((int32_t)486187739))), (int32_t)L_13));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	return Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_mE0F11B2378B0275A968BB6ECC1DE6D09E3ED8CC8 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___lhs0, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Equals(rhs);
		Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_m6953E1B207A32E9A8A9BFDB28BA00D9628FD3930 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___lhs0, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___rhs1, const RuntimeMethod* method)
{
	{
		// return !lhs.Equals(rhs);
		Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m005AB31948BB907D11D7E64C051F6C08D2B4BFF2 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m1C036AD27F8B1E3EA9AFB22880B84637CC6693B8 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m0A7220BD30B6E87681E5D63B89FA177E24A93FD5 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Destroy() { }
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  Provider_Raycast_mBEE3804BA51E701D3775CC4AC1AFD16FEB97FB72 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___defaultRaycastHit0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray1, int32_t ___trackableTypeMask2, int32_t ___allocator3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_Raycast_mBEE3804BA51E701D3775CC4AC1AFD16FEB97FB72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("Raycasting using a Ray is not supported.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteralB51BA3F369D95E685969CC962493A3F0B421BA4D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_Raycast_mBEE3804BA51E701D3775CC4AC1AFD16FEB97FB72_RuntimeMethod_var);
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  Provider_Raycast_m848F042E5613BB90E3A933E19E8229D7C94914C0 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___defaultRaycastHit0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, int32_t ___trackableTypeMask2, int32_t ___allocator3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_Raycast_m848F042E5613BB90E3A933E19E8229D7C94914C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("Raycasting using a screen point is not supported.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral0B9AEC2348486B831A3488530ACA1A6FECCC60DE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_Raycast_m848F042E5613BB90E3A933E19E8229D7C94914C0_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m58E4226B4157880E60C02C82B5FB24D9760EA94F (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_pinvoke(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_pinvoke_back(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke& marshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_pinvoke_cleanup(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_com(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_com_back(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com& marshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_com_cleanup(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::get_supportedTrackableTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->get_U3CsupportedTrackableTypesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var hash = (id == null) ? 0 : id.GetHashCode();
		String_t* L_0 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		// hash = hash * 486187739 + ((subsystemImplementationType == null) ? 0 : subsystemImplementationType.GetHashCode());
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_0037;
		}
	}
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// hash = hash * 486187739 + supportsViewportBasedRaycast.GetHashCode();
		bool L_7 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + supportsWorldBasedRaycast.GetHashCode();
		bool L_9 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + supportedTrackableTypes.GetHashCode();
		int32_t L_11 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)), (int32_t)((int32_t)486187739))), (int32_t)L_8)), (int32_t)((int32_t)486187739))), (int32_t)L_10)), (int32_t)((int32_t)486187739))), (int32_t)L_12));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, ((*(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)UnBox(L_1, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716(_thisAdjusted, ___obj0, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("XRRaycastSubsystemDescriptor:\nsupportsViewportBasedRaycast: {0}\nsupportsWorldBasedRaycast: {1}",
		//     supportsViewportBasedRaycast, supportsWorldBasedRaycast);
		bool L_0 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     String.Equals(id, other.id) &&
		//     (subsystemImplementationType == other.subsystemImplementationType) &&
		//     (supportsViewportBasedRaycast == other.supportsViewportBasedRaycast) &&
		//     (supportsWorldBasedRaycast == other.supportsWorldBasedRaycast) &&
		//     (supportedTrackableTypes == other.supportedTrackableTypes);
		String_t* L_0 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		bool L_6 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_7 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0056;
		}
	}
	{
		bool L_8 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_9 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_10 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		int32_t L_11 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
	}

IL_0056:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146_AdjustorThunk (RuntimeObject * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	return Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m9381F5CB3E9EBEBFFFBA7D82FED170AB0DBB30C8 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___lhs0, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(Cinfo lhs, Cinfo rhs) { return lhs.Equals(rhs); }
		Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_mF05D0667B661C74FD87B918E24CBE4BA7E21D317 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___lhs0, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(Cinfo lhs, Cinfo rhs) { return !lhs.Equals(rhs); }
		Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m23A09DFBE9B001EA5716EF0D11FAB9878AEFA634 (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mA1D84CAD4F173F45729BCCF7F9203317BC16E88C (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m9C33B460B119788705D6CF145510A3CA3320CFCA (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Destroy() { }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_Provider::TryAddReferencePoint(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddReferencePoint_mEECEE05AE6CE36CC4DFC6B34EB2328203ABF74D2 (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * ___referencePoint1, const RuntimeMethod* method)
{
	{
		// referencePoint = default(XRReferencePoint);
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * L_0 = ___referencePoint1;
		il2cpp_codegen_initobj(L_0, sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 ));
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_Provider::TryAttachReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAttachReferencePoint_m6B37B8E188234F1B273B4CCCBA86C3369A9056EF (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableToAffix0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * ___referencePoint2, const RuntimeMethod* method)
{
	{
		// referencePoint = default(XRReferencePoint);
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * L_0 = ___referencePoint2;
		il2cpp_codegen_initobj(L_0, sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 ));
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_Provider::TryRemoveReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryRemoveReferencePoint_m715A9000B06295D71581229BCCE534B5F1BDB5E2 (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___referencePointId0, const RuntimeMethod* method)
{
	{
		// public virtual bool TryRemoveReferencePoint(TrackableId referencePointId) => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mCD64559C157D9CBFD1E7A094FDC3A97DD5333683 (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshal_pinvoke(const Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F& unmarshaled, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshal_pinvoke_back(const Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_pinvoke& marshaled, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshal_pinvoke_cleanup(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshal_com(const Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F& unmarshaled, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshal_com_back(const Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_com& marshaled, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshal_com_cleanup(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	return Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mD7343957DA2CC53442EE463285B402E743AB5F6D (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_mD7343957DA2CC53442EE463285B402E743AB5F6D_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	Cinfo_set_id_mD7343957DA2CC53442EE463285B402E743AB5F6D_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m219B4D8D74447725A14F7BD44138EBA80D24347C (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_m219B4D8D74447725A14F7BD44138EBA80D24347C_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_m219B4D8D74447725A14F7BD44138EBA80D24347C_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::get_supportsTrackableAttachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_mEB155EF1924D1549BAA15B29CABA3396F872A8AB (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsTrackableAttachments_mEB155EF1924D1549BAA15B29CABA3396F872A8AB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	return Cinfo_get_supportsTrackableAttachments_mEB155EF1924D1549BAA15B29CABA3396F872A8AB_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m151F963D473554CDCC0C403883C16AB111751716 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsTrackableAttachments_m151F963D473554CDCC0C403883C16AB111751716_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	Cinfo_set_supportsTrackableAttachments_m151F963D473554CDCC0C403883C16AB111751716_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m2D92CDC387387B380C281CE4FFD26A62D889E133 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_m2D92CDC387387B380C281CE4FFD26A62D889E133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var hash = (id == null) ? 0 : id.GetHashCode();
		String_t* L_0 = Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		// hash = hash * 486187739 + ((subsystemImplementationType == null) ? 0 : subsystemImplementationType.GetHashCode());
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_0037;
		}
	}
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m2D92CDC387387B380C281CE4FFD26A62D889E133_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	return Cinfo_GetHashCode_m2D92CDC387387B380C281CE4FFD26A62D889E133(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m440F4649C6BFDCECAD80ABF23873BB9C82F9938A (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m440F4649C6BFDCECAD80ABF23873BB9C82F9938A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, ((*(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)UnBox(L_1, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m440F4649C6BFDCECAD80ABF23873BB9C82F9938A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	return Cinfo_Equals_m440F4649C6BFDCECAD80ABF23873BB9C82F9938A(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     String.Equals(id, other.id) &&
		//     subsystemImplementationType == other.subsystemImplementationType;
		String_t* L_0 = Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32_AdjustorThunk (RuntimeObject * __this, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	return Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m12FF0D2B4437F9C4F91E26A307E850F8929ADEF6 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___lhs0, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Equals(rhs);
		Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_m5F711CB5097A3A12D8295CC8DFFD54C111464C3B (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___lhs0, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___rhs1, const RuntimeMethod* method)
{
	{
		// return !lhs.Equals(rhs);
		Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Resume_m825C7D57A50CF4E07D0F48BD32E86A5CD148C6AC (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Resume() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Pause_mE72C2BC7A60936E0E42B0AABBCA5C72107FE9BFA (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Pause() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_m44516D330A225A42401D9F850CAB45A1781656A7 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F  ___updateParams0, const RuntimeMethod* method)
{
	{
		// public virtual void Update(XRSessionUpdateParams updateParams) { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m91FDA48A481008AB6F408823ACFA4E51B6710F17 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Destroy() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Reset_mC07FE81BB38D7C6F1123D477E078BCA98DD0007E (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Reset() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationPause_mDDA05F7C18D3B1E26F0B468CBC454557788D147B (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual void OnApplicationPause() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationResume_m598667339799D80D929DEBBA5C197AC4C394C52A (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual void OnApplicationResume() { }
		return;
	}
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Provider_get_nativePtr_m36BB948CA26F060AE9F9B5E77191B48605C5770B (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_get_nativePtr_m36BB948CA26F060AE9F9B5E77191B48605C5770B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual IntPtr nativePtr => IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * Provider_GetAvailabilityAsync_m0C73C4907A03BA2F018EA2C0CE66C9C17423C6DD (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetAvailabilityAsync_m0C73C4907A03BA2F018EA2C0CE66C9C17423C6DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Promise<SessionAvailability>.CreateResolvedPromise(SessionAvailability.None);
		Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * L_0 = Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C(0, /*hidden argument*/Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88 * Provider_InstallAsync_m17CAA895097CD78BC743DD1CA0CB4B6F5F7091D6 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_InstallAsync_m17CAA895097CD78BC743DD1CA0CB4B6F5F7091D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Promise<SessionInstallationStatus>.CreateResolvedPromise(SessionInstallationStatus.ErrorInstallNotSupported);
		Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88 * L_0 = Promise_1_CreateResolvedPromise_m1C9702FA1520BB681C0979C7264DA107FC2AD627(4, /*hidden argument*/Promise_1_CreateResolvedPromise_m1C9702FA1520BB681C0979C7264DA107FC2AD627_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_trackingState_m3E9021C49EADF2BE9853FD13A23650CE5237A2BF (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual TrackingState trackingState => TrackingState.None;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_notTrackingReason_mD6C96A5620A1DD87BCB86710E9460A41C5B18F66 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual NotTrackingReason notTrackingReason => NotTrackingReason.Unsupported;
		return (int32_t)(6);
	}
}
// System.Guid UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::get_sessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Provider_get_sessionId_m28A8F75715D7469B0F555CAC2E9B7D71B68CAFCE (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_get_sessionId_m28A8F75715D7469B0F555CAC2E9B7D71B68CAFCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual Guid sessionId => Guid.Empty;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_0();
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::get_matchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_matchFrameRate_m00AF2464E03325596FD549BBDAFEC2E41594094A (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// get => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::set_matchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_matchFrameRate_mA9C1E42C866CCD99055A7B2CE2051EF13D167399 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_set_matchFrameRate_mA9C1E42C866CCD99055A7B2CE2051EF13D167399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("Matching frame rate is not supported.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, _stringLiteralC6EAFD4C3B23645C412BB41A74CBFEB5A62E11BF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Provider_set_matchFrameRate_mA9C1E42C866CCD99055A7B2CE2051EF13D167399_RuntimeMethod_var);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_frameRate_mC445B76B58305DB89474EBF4A1EAC3DFBB8268D0 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_get_frameRate_mC445B76B58305DB89474EBF4A1EAC3DFBB8268D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("Querying the frame rate is not supported by this session subsystem.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, _stringLiteral3B1384C148B6355F25E67F7DFA0D39159B634A77, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_get_frameRate_mC445B76B58305DB89474EBF4A1EAC3DFBB8268D0_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m921D9E5D94AB32804689C972E36ECA2601BB2AAE (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_pinvoke(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_pinvoke_back(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke& marshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_pinvoke_cleanup(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_com(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_com_back(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com& marshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_com_cleanup(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::get_supportsInstall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::get_supportsMatchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline(_thisAdjusted, ___value0, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var hash = (id != null) ? id.GetHashCode() : 0;
		String_t* L_0 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		String_t* L_1 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		// hash = hash * 486187739 + ((subsystemImplementationType != null) ? subsystemImplementationType.GetHashCode() : 0);
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_002d;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_002d:
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// hash = hash * 486187739 + supportsInstall.GetHashCode();
		bool L_7 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + supportsMatchFrameRate.GetHashCode();
		bool L_9 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)), (int32_t)((int32_t)486187739))), (int32_t)L_8)), (int32_t)((int32_t)486187739))), (int32_t)L_10));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, ((*(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)UnBox(L_1, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     string.Equals(id, other.id) &&
		//     (subsystemImplementationType == other.subsystemImplementationType) &&
		//     (supportsInstall == other.supportsInstall) &&
		//     (supportsMatchFrameRate == other.supportsMatchFrameRate);
		String_t* L_0 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		bool L_6 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		bool L_7 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0047;
		}
	}
	{
		bool L_8 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		bool L_9 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77_AdjustorThunk (RuntimeObject * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	return Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_mC09DBC686396509BF5CF7B2262E975DD1C5CC22A (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___lhs0, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Equals(rhs);
		Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_m70FD83E1EA5AD00665F7DBA35AC5C29994E40778 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___lhs0, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___rhs1, const RuntimeMethod* method)
{
	{
		// return !lhs.Equals(rhs);
		Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m45C4A6583BBDA8DC5FD506339DC7A80474E88CC2_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m22F8F6D7511C66B0B2240DABFBA9A38D01C8A31F_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImageCinfo_get_nativeHandle_mAA33429DC514605299C7299B3FA58D6FF181F129_inline (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method)
{
	{
		// public int nativeHandle => m_NativeHandle;
		int32_t L_0 = __this->get_m_NativeHandle_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  CameraImageCinfo_get_dimensions_mF825187AC7021EB0AC8B67D62C173CAF2C3F3E75_inline (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int dimensions => m_Dimensions;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_m_Dimensions_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImageCinfo_get_planeCount_m908994322F1F23572F94579C395EF075F520BEEA_inline (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method)
{
	{
		// public int planeCount => m_PlaneCount;
		int32_t L_0 = __this->get_m_PlaneCount_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CameraImageCinfo_get_timestamp_mD46C187B596B91C5B2972547A981F690C5E8F57B_inline (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method)
{
	{
		// public double timestamp => m_Timestamp;
		double L_0 = __this->get_m_Timestamp_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImageCinfo_get_format_mEAE51C8E4500B1BA39EAF59AB821DB63561ED1B0_inline (CameraImageCinfo_tC1AFDA63CF7C0950883BC18FCB10ACE434335AF8 * __this, const RuntimeMethod* method)
{
	{
		// public CameraImageFormat format => m_Format;
		int32_t L_0 = __this->get_m_Format_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		int32_t L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___other0), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t CameraImagePlaneCinfo_get_dataPtr_m5281CDEFE43F3D6098315A910D52E13850B14939_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr dataPtr => m_DataPtr;
		intptr_t L_0 = __this->get_m_DataPtr_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_dataLength_m564E09ED13D1303E1FE1B06E5131D455773EB79A_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public int dataLength => m_DataLength;
		int32_t L_0 = __this->get_m_DataLength_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_rowStride_m237F56D214542218ED13F6D64408895038A1789C_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public int rowStride => m_RowStride;
		int32_t L_0 = __this->get_m_RowStride_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraImagePlaneCinfo_get_pixelStride_mD729A4B48D646AB2DB440E813742FA3723A94C27_inline (CameraImagePlaneCinfo_t9561EBBAE03A6D66E9A095351DA17353E5B44FA7 * __this, const RuntimeMethod* method)
{
	{
		// public int pixelStride => m_PixelStride;
		int32_t L_0 = __this->get_m_PixelStride_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// Capabilities capabilities { get; set; }
		int32_t L_0 = __this->get_U3CcapabilitiesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// Capabilities capabilities { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcapabilitiesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = __this->get_U3CsupportsMovingImagesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMovingImagesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = __this->get_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = __this->get_U3CsupportsMutableLibraryU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMutableLibraryU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = __this->get_U3CsupportsBoundaryVerticesU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = __this->get_U3CsupportsClassificationU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->get_U3CsupportedTrackableTypesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mD7343957DA2CC53442EE463285B402E743AB5F6D_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m219B4D8D74447725A14F7BD44138EBA80D24347C_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_mEB155EF1924D1549BAA15B29CABA3396F872A8AB_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m151F963D473554CDCC0C403883C16AB111751716_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}

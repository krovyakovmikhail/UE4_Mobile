#pragma once

#include "CoreMinimal.h"
#include "PhotoGalleryInterface.h"  
#include "Android/AndroidApplication.h"

class PHOTOLIBRARY_API AndroidPhotoLibrary : public IPhotoLibrary
{
	public:
	virtual void OpenGallery() override;
	
#if PLATFORM_ANDROID
	public:
	static struct _JNIEnv *ENV;
#endif

#define DECLARE_JAVA_METHOD(name)

	
static jmethodID name = NULL;

	DECLARE_JAVA_METHOD(AndroidThunkJava_OpenGallery);	// Here goes the name of the method in the Java side
	
	#define INIT_JAVA_METHOD(name, signature)
	
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv(true))
	{ 
		name = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, #name, signature, false); 
		check(name != NULL);
	}
	else
	{ 
		check(0); 
	}

};

#pragma once 
#include "CoreMinimal.h" 
#include "PhotoGalleryInterface.h"  

class PHOTOLIBRARY_API IOSPhotoLibrary : public IPhotoLibrary 
{ 
	public:
	virtual void OpenGallery() override; 
}; 

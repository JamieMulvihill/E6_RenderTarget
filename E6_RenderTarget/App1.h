// Application.h
#ifndef _APP1_H
#define _APP1_H

// Includes
#include "DXF.h"	// include dxframework
#include "LightShader.h"
#include "TextureShader.h"
#include "FirstPassShader.h"

class App1 : public BaseApplication
{
public:

	App1();
	~App1();
	void init(HINSTANCE hinstance, HWND hwnd, int screenWidth, int screenHeight, Input* in, bool VSYNC, bool FULL_SCREEN);

	bool frame();

protected:
	bool render();
	void firstPass();
	void secondPass();
	void finalPass();
	void gui();

private:

	CubeMesh* cubeMesh;
	OrthoMesh* orthoMesh;

	SphereMesh* sphereMesh;
	OrthoMesh* orthoMesh_Two;

	TriangleMesh* triangleMesh;
	//OrthoMesh* orthoMesh_three;

	FirstPassShader* firstPassShader;
	LightShader* lightShader;
	TextureShader* textureShader;

	RenderTexture* renderTexture;
	RenderTexture* renderTexture_two;

	Light* light;
	Camera* newCamera;
	Camera* thirdCamera;
};

#endif
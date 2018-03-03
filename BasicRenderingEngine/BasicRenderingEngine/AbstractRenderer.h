#ifndef ABSTRACT_RENDERER_H
#define ABSTRACT_RENDERER_H



/*
Abstract class for renderer, implemted by renderer under different graphic API: DirectX 11, 
OpenGL core and different content creator: GLFW, SDL
*/

namespace BasicRenderingEngine {
	//classes 


	enum RendererAPI {/*OpenGL*/ GLFW, SDL,/*DirectX*/ DX11, DX12, /*Others*/ Vulcan };

	class AbstractRenderer
	{
	protected:
		
	public:
		AbstractRenderer();
		~AbstractRenderer();

		//
		void virtual Initalize(); //inialize rendering engine
		void virtual RenderingLoop();


	};

}

#endif // !BASIC_RENDERENGINE_H
#pragma once
//interface for renderer

namespace BasicRenderingEngine {
	class IRenderer {
	public:
		IRenderer();
		virtual ~IRenderer();

		//methods
		virtual void Render(); //render the scene
	};
}
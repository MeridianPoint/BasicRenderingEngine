#pragma once
//basic class for the engine

namespace BasicRenderingEngine {
	//classes needed
	class AbstractRenderer;

	class Engine
	{
	private:
		static Engine instance;

		AbstractRenderer renderer;
	public:
		Engine();
		~Engine();

		static Engine& getInstance();
	};

}



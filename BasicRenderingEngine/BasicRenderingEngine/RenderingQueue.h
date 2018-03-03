#pragma once
#ifndef RENDERING_QUEUE_H
#define RENDERING_QUEUE_H


/*
  implementation of rendering queque sorted by render obejct type
  currently implemented using C++ priority queue
*/

namespace BasicRenderingEngine {
	class CompareIRenderable
	{
	public:
		bool operator() (std::weak_ptr<IRenderable> lhs, std::weak_ptr<IRenderable> rhs)
		{
			return lhs.lock->objRendertype > rhs.lock->objRendertype;
		}
	};

	class IRenderable;

	class RenderingQueue
	{
	private:
		std::priority_queue<std::weak_ptr<IRenderable>, std::vector<std::weak_ptr<IRenderable>>, less<>> Renderqueue;
	public:
		RenderingQueue();
		~RenderingQueue();

		//renderqueue access
		void AddObject(IRenderable obejct);
		//void ConverSceneGraph(SceneNode Root);

		
	};

}

#endif // !RENDERING_QUEUE_H
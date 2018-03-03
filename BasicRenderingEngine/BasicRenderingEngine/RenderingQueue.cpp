#include "stdafx.h"
#include "RenderingQueue.h"

namespace BasicRenderingEngine {
	class IRenderable;

	RenderingQueue::RenderingQueue()
	{
	}


	RenderingQueue::~RenderingQueue()
	{
	}

	void RenderingQueue::AddObject(IRenderable obejct)
	{
		Renderqueue.push(object);
	}

}
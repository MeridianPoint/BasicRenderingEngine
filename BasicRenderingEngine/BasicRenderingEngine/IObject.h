#ifndef IBOJECT_H
#define IBOJECT_H

namespace BasicRenderingEngine {
	class IObject
	{
	private:
		__int64 UUID; //unique id for the object
	public:
		IObject();
		virtual ~IObject();
	};
}

#endif // !IBOJECT_H

//interface of the a game object




#ifndef IRENDERABLE_H
#define IRENDERABLE_H


//enum for type of rendering object 
enum RenderType {Obaque, Transparent, UI };

/*
interface for renderable objects
*/
class IRenderable {
protected:
	bool isVisible = true;
	bool isCulled = false;
	
public:
	RenderType objRendertype;

	void virtual render(); //render the object

	//visibility
	void virtual SetVisible(bool val);
	bool virtual GetVsisible();
	void virtual SetCulled(bool val);
	bool virtual GetCulled();
	bool virtual willRender(); //will the object render?
};


#endif // !IRENDERABLE_H

#include <Hazel.h>
#include <Hazel/Core/EntryPoint.h>

#include "EditorLayer.h"

namespace Hazel {

	class Hazelnut : public Hazel::Application
	{
	public:
		Hazelnut()
			: Application("Hazel Editor")
		{
			PushLayer(new EditorLayer());
		}

		~Hazelnut()
		{
		}
	};

	Hazel::Application* Hazel::CreateApplication()
	{
		return new Hazelnut();
	}

}
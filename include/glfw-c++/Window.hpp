#include <GLFW/glfw3.h>
#include <glfw-c++/Monitor.hpp>

namespace glfw
{
	class Window
	{
	private:
		GLFWwindow* m_window;
	public:
		static void DefaultHints();
		static void Hint(int target, int hint);

		void Create(int width, int height, const std::string &title, const Monitor &monitor, const Window &share);
		void Create(int width, int height, const std::string &title, const Monitor &monitor);
		void Create(int width, int height, const std::string &title, const Window &share);
		void Create(int width, int height, const std::string &title);

		int ShouldClose() const;
		void SetShouldClose(int value);

		void SetTitle(std::string title);

		int GetPosX() const;
		int GetPosY() const;
		void SetPos(int x, int y);

		int GetSizeX() const;
		int GetSizeY() const;
		void SetSize(int x, int y);

		int GetFramebufferSizeX() const;
		int GetFramebufferSizeY() const;

		void Iconify();
		void Restore();
		void Show();
		void Hide();

		Monitor GetMonitor() const;

		int GetAttrib(int attrib) const;

		void SetUserPointer(void *pointer);
		void* GetUserPointer() const;

		static void PollEvents();
		static void WaitEvents();

		GLFWwindow* GetRawPointerData() const;

		Window(int width, int height, const std::string &title, const Monitor &monitor, const Window &share);
		Window(int width, int height, const std::string &title, const Monitor &monitor);
		Window(int width, int height, const std::string &title, const Window &share);
		Window(int width, int height, const std::string &title);
		~Window();
	};
}
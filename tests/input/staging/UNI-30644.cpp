// Regression 1....
const FOO_MACRO(bar, baz::qux) & Foo() const
{
    return m_Bar;
}
template<class FooType>

// Regression 2
struct
{
    foo      v0;
    bar      v1;
} static FOO_ALIGN(bar) =
{
    { 127, 0 }
};

// Regression 3
namespace win
{
    class __declspec(novtable)Input : public IInputBase
    {
        virtual LRESULT OnMessage(HWND window, UINT message, WPARAM wParam, LPARAM lParam, BOOL& handled);
        bool GetTouch(unsigned index, Touch& touch) const;
        static bool ConvertPositionToClientAreaCoord(HWND activeWindow, POINT position, PointerDeviceType deviceType, const PositionConvertData& data, Vector2f& outPosition);
        void ProcessTouchImpl(HWND hWnd, const TOUCHINPUT& ti, const Input::PositionConvertData& data);
        inline ResourceRoot(void) : count(0) {}
    }

    struct __declspec(novtable)IInputBase
    {
        virtual ~IInputBase() {}
        virtual LRESULT OnMessage(HWND window, UINT message, WPARAM wParam, LPARAM lParam, BOOL& handled) = 0;
    }
}

// Regression 4
extern const __declspec(selectany) IID & IID_IInjectionBroker = __uuidof(IInjectionBroker);

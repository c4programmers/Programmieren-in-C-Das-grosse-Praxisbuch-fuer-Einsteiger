/* example 268 – using GDI */
#include <windows.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);

            // Linienfarbe wählen
            HPEN hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
            SelectObject(hdc, hPen);

            // Linie zeichnen
            MoveToEx(hdc, 50, 50, NULL);
            LineTo(hdc, 200, 50);

            // Rechteck
            Rectangle(hdc, 50, 80, 200, 150);

            // Kreis (Ellipse mit gleicher Breite und Höhe)
            Ellipse(hdc, 50, 170, 200, 320);

            DeleteObject(hPen);
            EndPaint(hwnd, &ps);
            return 0;
        }


     	case WM_DESTROY:
            PostQuitMessage(0);
            return 0;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow) {
    const char CLASS_NAME[] = "SimpleGraphicsWindow";

    WNDCLASS wc = { 0 };
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,                              // Optional window styles
        CLASS_NAME,                     // Window class
        "Grafik mit GDI in C",         // Title
        WS_OVERLAPPEDWINDOW,           // Style

        CW_USEDEFAULT, CW_USEDEFAULT, 400, 400,  // Position and size
        NULL, NULL, hInstance, NULL);

    if (hwnd == NULL) return 0;

    ShowWindow(hwnd, nCmdShow);

    // Nachrichten-Schleife
    MSG msg = { 0 };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

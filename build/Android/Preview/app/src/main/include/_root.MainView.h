// This file was generated based on C:/Users/borde_000/Desktop/Apps/maryjane/maryjane/build/Android/Preview/cache/ux14/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
#include <Fuse.IRootVisualProvider.h>
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost;}}}
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Drawing{struct BrushConverter;}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemModule;}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct DiagnosticsImplModule;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerModule;}}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Storage{struct StorageModule;}}}
namespace g{namespace Fuse{namespace Testing{struct UnoTestingHelper;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTaskModule;}}}
namespace g{namespace Fuse{namespace WebSocket{struct WebSocketClientModule;}}}
namespace g{namespace FuseJS{struct Base64;}}
namespace g{namespace FuseJS{struct Bundle;}}
namespace g{namespace FuseJS{struct Environment;}}
namespace g{namespace FuseJS{struct FileReaderImpl;}}
namespace g{namespace FuseJS{struct Globals;}}
namespace g{namespace FuseJS{struct Lifecycle;}}
namespace g{namespace FuseJS{struct UserEvents;}}
namespace g{namespace Polyfills{namespace Window{struct WindowModule;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_4_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::Property1*> webView_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> nvh_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Message_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Fuse::Controls::NativeViewHost*> nvh;
    uStrong< ::g::Fuse::Controls::WebView*> webView;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    uStrong< ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule*> FuseReactiveFuseJSDiagnosticsImplModule;
    uStrong< ::g::Fuse::Reactive::FuseJS::Http*> FuseReactiveFuseJSHttp;
    uStrong< ::g::Fuse::Reactive::FuseJS::TimerModule*> FuseReactiveFuseJSTimerModule;
    uStrong< ::g::Fuse::Drawing::BrushConverter*> FuseDrawingBrushConverter;
    uStrong< ::g::Fuse::Triggers::BusyTaskModule*> FuseTriggersBusyTaskModule;
    uStrong< ::g::Fuse::Testing::UnoTestingHelper*> FuseTestingUnoTestingHelper;
    uStrong< ::g::Fuse::FileSystem::FileSystemModule*> FuseFileSystemFileSystemModule;
    uStrong< ::g::Fuse::Storage::StorageModule*> FuseStorageStorageModule;
    uStrong< ::g::Fuse::WebSocket::WebSocketClientModule*> FuseWebSocketWebSocketClientModule;
    uStrong< ::g::Polyfills::Window::WindowModule*> PolyfillsWindowWindowModule;
    uStrong< ::g::FuseJS::Globals*> FuseJSGlobals;
    uStrong< ::g::FuseJS::Lifecycle*> FuseJSLifecycle;
    uStrong< ::g::FuseJS::Environment*> FuseJSEnvironment;
    uStrong< ::g::FuseJS::Base64*> FuseJSBase64;
    uStrong< ::g::FuseJS::Bundle*> FuseJSBundle;
    uStrong< ::g::FuseJS::FileReaderImpl*> FuseJSFileReaderImpl;
    uStrong< ::g::FuseJS::UserEvents*> FuseJSUserEvents;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainView_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MainView_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MainView_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MainView_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MainView_typeof()->Init(), __selector5_; }

    void ctor_4();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g

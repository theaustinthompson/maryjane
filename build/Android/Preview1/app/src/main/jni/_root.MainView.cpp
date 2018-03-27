// This file was generated based on C:/Users/borde_000/Desktop/Apps/maryjane/maryjane/build/Android/Preview1/cache/ux14/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.maryjane_bundle.h>
#include <_root.maryjane_FuseCo-32dc96ef.h>
#include <_root.maryjane_FuseCo-6d25f8b4.h>
#include <_root.maryjane_FuseDr-584fa0ac.h>
#include <_root.maryjane_FuseEl-2ef3bf53.h>
#include <_root.maryjane_FuseTr-186a1fff.h>
#include <_root.maryjane_FuseTr-466e618.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.BottomB-f0a90651.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileS-3c9ac41b.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DeviceCaps.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-458e75fc.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-b8cdaf7f.h>
#include <Fuse.Triggers.Actions-d8fdd070.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.PageLoaded.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSoc-2254f404.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[107];
static uType* TYPES[11];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :40
static void MainView__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Resource_typeof()->Init();
    ::g::Fuse::Reactive::DeviceCaps_typeof()->Init();
    ::g::Fuse::Animations::Easing_typeof()->Init();
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    ::g::Fuse::Drawing::Brushes_typeof()->Init();
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    ::g::Fuse::Elements::TranslationModes_typeof()->Init();
    ::g::Fuse::TranslationModes_typeof()->Init();
    ::g::Fuse::Triggers::Actions::GiveFocus_typeof()->Init();
    ::g::Fuse::Triggers::LayoutTransition_typeof()->Init();
    ::g::Fuse::Triggers::WhileKeyboardVisible_typeof()->Init();
    ::g::Fuse::Triggers::IScrolledLengths_typeof()->Init();
    ::g::Fuse::Resources::MemoryPolicy_typeof()->Init();
    ::g::Fuse::Font_typeof()->Init();
    ::g::Fuse::ScalingModes_typeof()->Init();
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"nvh"*/], ::STRINGS[1/*"webView"*/], ::STRINGS[2/*"temp_eb0"*/], ::STRINGS[3/*"temp_eb1"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Url"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Opacity"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Value"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Message"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"nvh"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"webView"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Reactive::DeviceCaps::Device(), ::STRINGS[8/*"Device"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[9/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[10/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[11/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[12/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[13/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[14/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[15/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[16/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[17/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[18/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[19/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[20/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[21/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[22/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[23/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[24/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[25/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[26/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[27/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[28/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[29/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[30/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[31/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[32/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[33/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[34/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[35/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[36/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[37/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[38/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[39/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[40/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[40/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[41/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[41/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[42/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[42/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[43/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[43/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[44/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[44/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[45/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[45/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[46/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[46/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[47/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[47/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[48/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[48/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[49/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[49/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[50/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[50/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[51/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[51/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[52/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[52/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[53/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[53/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[54/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[54/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[55/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[55/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[56/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[56/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[57/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[58/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[59/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[60/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[61/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[62/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[63/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[64/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[65/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[65/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[66/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[67/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[67/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[68/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[69/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[70/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[70/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[71/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[72/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[73/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[74/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[75/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[76/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[77/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload(), ::STRINGS[78/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), ::STRINGS[79/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin(), ::STRINGS[80/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light(), ::STRINGS[81/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular(), ::STRINGS[82/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium(), ::STRINGS[83/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold(), ::STRINGS[84/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic(), ::STRINGS[85/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic(), ::STRINGS[86/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic(), ::STRINGS[87/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic(), ::STRINGS[88/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic(), ::STRINGS[89/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[90/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[91/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[92/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[93/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[94/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[95/*"Height"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("nvh");
    ::STRINGS[1] = uString::Const("webView");
    ::STRINGS[2] = uString::Const("temp_eb0");
    ::STRINGS[3] = uString::Const("temp_eb1");
    ::STRINGS[4] = uString::Const("Url");
    ::STRINGS[5] = uString::Const("Opacity");
    ::STRINGS[6] = uString::Const("Value");
    ::STRINGS[7] = uString::Const("Message");
    ::STRINGS[8] = uString::Const("Device");
    ::STRINGS[9] = uString::Const("Linear");
    ::STRINGS[10] = uString::Const("QuadraticIn");
    ::STRINGS[11] = uString::Const("QuadraticOut");
    ::STRINGS[12] = uString::Const("QuadraticInOut");
    ::STRINGS[13] = uString::Const("CubicIn");
    ::STRINGS[14] = uString::Const("CubicOut");
    ::STRINGS[15] = uString::Const("CubicInOut");
    ::STRINGS[16] = uString::Const("QuarticIn");
    ::STRINGS[17] = uString::Const("QuarticOut");
    ::STRINGS[18] = uString::Const("QuarticInOut");
    ::STRINGS[19] = uString::Const("QuinticIn");
    ::STRINGS[20] = uString::Const("QuinticOut");
    ::STRINGS[21] = uString::Const("QuinticInOut");
    ::STRINGS[22] = uString::Const("SinusoidalIn");
    ::STRINGS[23] = uString::Const("SinusoidalOut");
    ::STRINGS[24] = uString::Const("SinusoidalInOut");
    ::STRINGS[25] = uString::Const("ExponentialIn");
    ::STRINGS[26] = uString::Const("ExponentialOut");
    ::STRINGS[27] = uString::Const("ExponentialInOut");
    ::STRINGS[28] = uString::Const("CircularIn");
    ::STRINGS[29] = uString::Const("CircularOut");
    ::STRINGS[30] = uString::Const("CircularInOut");
    ::STRINGS[31] = uString::Const("ElasticIn");
    ::STRINGS[32] = uString::Const("ElasticOut");
    ::STRINGS[33] = uString::Const("ElasticInOut");
    ::STRINGS[34] = uString::Const("BackIn");
    ::STRINGS[35] = uString::Const("BackOut");
    ::STRINGS[36] = uString::Const("BackInOut");
    ::STRINGS[37] = uString::Const("BounceIn");
    ::STRINGS[38] = uString::Const("BounceOut");
    ::STRINGS[39] = uString::Const("BounceInOut");
    ::STRINGS[40] = uString::Const("Transparent");
    ::STRINGS[41] = uString::Const("Black");
    ::STRINGS[42] = uString::Const("Silver");
    ::STRINGS[43] = uString::Const("Gray");
    ::STRINGS[44] = uString::Const("White");
    ::STRINGS[45] = uString::Const("Maroon");
    ::STRINGS[46] = uString::Const("Red");
    ::STRINGS[47] = uString::Const("Purple");
    ::STRINGS[48] = uString::Const("Fuchsia");
    ::STRINGS[49] = uString::Const("Green");
    ::STRINGS[50] = uString::Const("Lime");
    ::STRINGS[51] = uString::Const("Olive");
    ::STRINGS[52] = uString::Const("Yellow");
    ::STRINGS[53] = uString::Const("Navy");
    ::STRINGS[54] = uString::Const("Blue");
    ::STRINGS[55] = uString::Const("Teal");
    ::STRINGS[56] = uString::Const("Aqua");
    ::STRINGS[57] = uString::Const("TopLeft");
    ::STRINGS[58] = uString::Const("Center");
    ::STRINGS[59] = uString::Const("Anchor");
    ::STRINGS[60] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[61] = uString::Const("VerticalBoxCenter");
    ::STRINGS[62] = uString::Const("TransformOriginOffset");
    ::STRINGS[63] = uString::Const("PositionOffset");
    ::STRINGS[64] = uString::Const("SizeFactor");
    ::STRINGS[65] = uString::Const("Size");
    ::STRINGS[66] = uString::Const("GiveFocus");
    ::STRINGS[67] = uString::Const("LayoutChange");
    ::STRINGS[68] = uString::Const("WorldPositionChange");
    ::STRINGS[69] = uString::Const("PositionChange");
    ::STRINGS[70] = uString::Const("SizeChange");
    ::STRINGS[71] = uString::Const("Keyboard");
    ::STRINGS[72] = uString::Const("Points");
    ::STRINGS[73] = uString::Const("Pixels");
    ::STRINGS[74] = uString::Const("ContentSize");
    ::STRINGS[75] = uString::Const("ScrollViewSize");
    ::STRINGS[76] = uString::Const("PreloadRetain");
    ::STRINGS[77] = uString::Const("UnloadUnused");
    ::STRINGS[78] = uString::Const("QuickUnload");
    ::STRINGS[79] = uString::Const("UnloadInBackground");
    ::STRINGS[80] = uString::Const("Thin");
    ::STRINGS[81] = uString::Const("Light");
    ::STRINGS[82] = uString::Const("Regular");
    ::STRINGS[83] = uString::Const("Medium");
    ::STRINGS[84] = uString::Const("Bold");
    ::STRINGS[85] = uString::Const("ThinItalic");
    ::STRINGS[86] = uString::Const("LightItalic");
    ::STRINGS[87] = uString::Const("Italic");
    ::STRINGS[88] = uString::Const("MediumItalic");
    ::STRINGS[89] = uString::Const("BoldItalic");
    ::STRINGS[90] = uString::Const("PlatformDefault");
    ::STRINGS[91] = uString::Const("Identity");
    ::STRINGS[92] = uString::Const("Local");
    ::STRINGS[93] = uString::Const("ParentSize");
    ::STRINGS[94] = uString::Const("Width");
    ::STRINGS[95] = uString::Const("Height");
    ::STRINGS[96] = uString::Const("pageLoaded");
    ::STRINGS[97] = uString::Const("url");
    ::STRINGS[98] = uString::Const("showWebView");
    ::STRINGS[99] = uString::Const("myPicture");
    ::STRINGS[100] = uString::Const("myName");
    ::STRINGS[101] = uString::Const("hasProfile");
    ::STRINGS[102] = uString::Const("login");
    ::STRINGS[103] = uString::Const("MainView.ux");
    ::STRINGS[104] = uString::Const("\n"
        "\t\t\t\t\t\t\t\t\treturn { url : document.location.href };\n"
        "\t\t\t\t\t\t\t\t");
    ::STRINGS[105] = uString::Const("Welcome");
    ::STRINGS[106] = uString::Const("Log In");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::JSEventHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::maryjane_bundle_typeof(),
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0),
        ::g::Fuse::IRootVisualProvider_typeof(), offsetof(::g::Fuse::AppBase_type, interface1));
    type->SetFields(7,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, webView_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, nvh_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp1_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp2_Message_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp5_Value_inst), 0,
        ::g::Fuse::Controls::NativeViewHost_typeof(), offsetof(MainView, nvh), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(MainView, webView), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb1), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MainView, __g_nametable1), 0,
        ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule_typeof(), offsetof(MainView, FuseReactiveFuseJSDiagnosticsImplModule), 0,
        ::g::Fuse::Reactive::FuseJS::Http_typeof(), offsetof(MainView, FuseReactiveFuseJSHttp), 0,
        ::g::Fuse::Reactive::FuseJS::TimerModule_typeof(), offsetof(MainView, FuseReactiveFuseJSTimerModule), 0,
        ::g::Fuse::Drawing::BrushConverter_typeof(), offsetof(MainView, FuseDrawingBrushConverter), 0,
        ::g::Fuse::Triggers::BusyTaskModule_typeof(), offsetof(MainView, FuseTriggersBusyTaskModule), 0,
        ::g::Fuse::Testing::UnoTestingHelper_typeof(), offsetof(MainView, FuseTestingUnoTestingHelper), 0,
        ::g::Fuse::FileSystem::FileSystemModule_typeof(), offsetof(MainView, FuseFileSystemFileSystemModule), 0,
        ::g::Fuse::Storage::StorageModule_typeof(), offsetof(MainView, FuseStorageStorageModule), 0,
        ::g::Fuse::WebSocket::WebSocketClientModule_typeof(), offsetof(MainView, FuseWebSocketWebSocketClientModule), 0,
        ::g::Polyfills::Window::WindowModule_typeof(), offsetof(MainView, PolyfillsWindowWindowModule), 0,
        ::g::FuseJS::Globals_typeof(), offsetof(MainView, FuseJSGlobals), 0,
        ::g::FuseJS::Lifecycle_typeof(), offsetof(MainView, FuseJSLifecycle), 0,
        ::g::FuseJS::Environment_typeof(), offsetof(MainView, FuseJSEnvironment), 0,
        ::g::FuseJS::Base64_typeof(), offsetof(MainView, FuseJSBase64), 0,
        ::g::FuseJS::Bundle_typeof(), offsetof(MainView, FuseJSBundle), 0,
        ::g::FuseJS::FileReaderImpl_typeof(), offsetof(MainView, FuseJSFileReaderImpl), 0,
        ::g::FuseJS::UserEvents_typeof(), offsetof(MainView, FuseJSUserEvents), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector5_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 2;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface1.fp_get_Root = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::AppBase__FuseIRootVisualProviderget_Root_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :152
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :156
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :152
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;

// public MainView() [instance] :152
void MainView::ctor_4()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :156
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    FuseReactiveFuseJSDiagnosticsImplModule = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    FuseReactiveFuseJSHttp = ::g::Fuse::Reactive::FuseJS::Http::New2();
    FuseReactiveFuseJSTimerModule = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    FuseDrawingBrushConverter = ::g::Fuse::Drawing::BrushConverter::New1();
    FuseTriggersBusyTaskModule = ::g::Fuse::Triggers::BusyTaskModule::New2();
    FuseTestingUnoTestingHelper = ::g::Fuse::Testing::UnoTestingHelper::New2();
    FuseFileSystemFileSystemModule = ::g::Fuse::FileSystem::FileSystemModule::New2();
    FuseStorageStorageModule = ::g::Fuse::Storage::StorageModule::New2();
    FuseWebSocketWebSocketClientModule = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    PolyfillsWindowWindowModule = ::g::Polyfills::Window::WindowModule::New3();
    FuseJSGlobals = ::g::FuseJS::Globals::New2();
    FuseJSLifecycle = ::g::FuseJS::Lifecycle::New3();
    FuseJSEnvironment = ::g::FuseJS::Environment::New2();
    FuseJSBase64 = ::g::FuseJS::Base64::New2();
    FuseJSBundle = ::g::FuseJS::Bundle::New2();
    FuseJSFileReaderImpl = ::g::FuseJS::FileReaderImpl::New2();
    FuseJSUserEvents = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[96/*"pageLoaded"*/]);
    webView = ::g::Fuse::Controls::WebView::New4();
    webView_Url_inst = ::g::maryjane_FuseControlsWebView_Url_Property::New1(webView, MainView::__selector0_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[97/*"url"*/]);
    nvh = ::g::Fuse::Controls::NativeViewHost::New3();
    nvh_Opacity_inst = ::g::maryjane_FuseElementsElement_Opacity_Property::New1(nvh, MainView::__selector1_);
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::maryjane_FuseTriggersWhileBool_Value_Property::New1(temp, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[98/*"showWebView"*/]);
    ::g::Fuse::Drawing::ImageFill* temp1 = ::g::Fuse::Drawing::ImageFill::New2();
    temp1_Url_inst = ::g::maryjane_FuseDrawingImageFill_Url_Property::New1(temp1, MainView::__selector0_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[99/*"myPicture"*/]);
    ::g::Fuse::Triggers::Actions::DebugAction* temp2 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    temp2_Message_inst = ::g::maryjane_FuseTriggersActionsDebugAction_Message_Property::New1(temp2, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[99/*"myPicture"*/]);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::maryjane_FuseControlsTextControl_Value_Property::New1(temp3, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[100/*"myName"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp4 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp4_Value_inst = ::g::maryjane_FuseTriggersWhileBool_Value_Property::New1(temp4, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[101/*"hasProfile"*/]);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[102/*"login"*/]);
    ::g::Fuse::Triggers::WhileFalse* temp5 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp5_Value_inst = ::g::maryjane_FuseTriggersWhileBool_Value_Property::New1(temp5, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[101/*"hasProfile"*/]);
    ::g::Fuse::Controls::DockPanel* temp15 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::JavaScript* temp16 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StatusBarBackground* temp17 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomBarBackground* temp18 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Controls::Panel* temp19 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp20 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Triggers::PageLoaded* temp21 = ::g::Fuse::Triggers::PageLoaded::New2();
    ::g::Fuse::Triggers::Actions::EvaluateJS* temp22 = ::g::Fuse::Triggers::Actions::EvaluateJS::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6);
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(webView_Url_inst, (uObject*)temp7, 3);
    ::g::Fuse::Triggers::AddingAnimation* temp24 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Change* temp25 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], nvh_Opacity_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp26 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp27 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp8, 3);
    ::g::Fuse::Controls::Panel* temp28 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp29 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp30 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp31 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp32 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp33 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    ::g::Fuse::Controls::Panel* temp34 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Circle* temp35 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::Stroke* temp36 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp37 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Url_inst, (uObject*)temp9, 3);
    ::g::Fuse::Gestures::Clicked* temp39 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::DataBinding* temp40 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Message_inst, (uObject*)temp10, 3);
    ::g::Fuse::Controls::StackPanel* temp41 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp42 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp43 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Triggers::AddingAnimation* temp44 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Move* temp45 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp46 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Controls::DockPanel* temp47 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp48 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp49 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.2313726f, 0.3490196f, 0.5960785f, 1.0f));
    ::g::Fuse::Controls::Image* temp50 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp51 = ::g::Fuse::Controls::Text::New3();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp13);
    ::g::Fuse::Reactive::DataBinding* temp52 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp14, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp16->LineNumber(4);
    temp16->FileName(::STRINGS[103/*"MainView.ux"*/]);
    temp16->File(::g::Uno::UX::BundleFileSource::New1(::g::maryjane_bundle::MainViewa2d5d44f()));
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp18, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), nvh);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    uPtr(nvh)->Name(MainView::__selector4_);
    uPtr(nvh)->Background(temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nvh)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), webView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nvh)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    uPtr(webView)->Name(MainView::__selector5_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(webView)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(webView)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp22->JavaScript(::STRINGS[104/*"\n\t\t\t\t\...*/]);
    temp22->add_Handler(uDelegate::New(::TYPES[5/*Fuse.Triggers.Actions.JSEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp25);
    ::g::Fuse::Animations::Change__set_Value_fn(temp25, uCRef(0.0f));
    temp25->Duration(0.3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp46);
    temp29->Alignment(10);
    temp29->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    temp30->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp30->Layer(1);
    temp30->Fill(temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Strokes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp31);
    temp31->Width(2.0f);
    temp31->Brush(temp32);
    temp34->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp34->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Fills()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Strokes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp38);
    temp36->Width(4.0f);
    temp36->Brush(temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp40);
    temp41->Alignment(10);
    temp41->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp42->Value(::STRINGS[105/*"Welcome"*/]);
    temp42->FontSize(22.0f);
    temp42->TextAlignment(1);
    temp3->FontSize(26.0f);
    temp3->TextAlignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp45);
    temp45->Y(1.0f);
    temp45->Duration(1.5);
    temp45->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp45->Easing(::g::Fuse::Animations::Easing::BackIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp52);
    temp47->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp47->Alignment(10);
    temp47->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 15.0f, 5.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp47, uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp48->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp48->Layer(1);
    temp48->Fill(temp49);
    temp50->Margin(::g::Uno::Float4__New2(8.0f, 8.0f, 10.0f, 8.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp50, 0);
    temp50->File(::g::Uno::UX::BundleFileSource::New1(::g::maryjane_bundle::FBfLogo__white_5129938f551()));
    temp51->Value(::STRINGS[106/*"Log In"*/]);
    temp51->FontSize(20.0f);
    temp51->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp51->Alignment(10);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), nvh);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), webView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
}

// public MainView New() [static] :152
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g

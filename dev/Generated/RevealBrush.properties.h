// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class RevealBrushProperties
{
public:
    RevealBrushProperties();

    void AlwaysUseFallback(bool value);
    bool AlwaysUseFallback();

    void Color(winrt::Color const& value);
    winrt::Color Color();

    static void SetState(winrt::UIElement const& target, winrt::RevealBrushState const& value);
    static winrt::RevealBrushState GetState(winrt::UIElement const& target);

    void TargetTheme(winrt::ApplicationTheme const& value);
    winrt::ApplicationTheme TargetTheme();

    static winrt::DependencyProperty AlwaysUseFallbackProperty() { return s_AlwaysUseFallbackProperty; }
    static winrt::DependencyProperty ColorProperty() { return s_ColorProperty; }
    static winrt::DependencyProperty StateProperty() { return s_StateProperty; }
    static winrt::DependencyProperty TargetThemeProperty() { return s_TargetThemeProperty; }

    static GlobalDependencyProperty s_AlwaysUseFallbackProperty;
    static GlobalDependencyProperty s_ColorProperty;
    static GlobalDependencyProperty s_StateProperty;
    static GlobalDependencyProperty s_TargetThemeProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnAlwaysUseFallbackPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnColorPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnTargetThemePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};

﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "ScrollingPresenter.h"
#include "ScrollingEdgeScrollEventArgs.g.h"

class ScrollingEdgeScrollEventArgs :
    public ReferenceTracker<ScrollingEdgeScrollEventArgs, winrt::implementation::ScrollingEdgeScrollEventArgsT, winrt::composable, winrt::composing>
{
public:
    ~ScrollingEdgeScrollEventArgs()
    {
        SCROLLINGPRESENTER_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);
    }

    ScrollingEdgeScrollEventArgs(const winrt::ScrollingPresenter& scrollingPresenter);

#pragma region IScrollingEdgeScrollEventArgs
    winrt::ScrollingScrollInfo ScrollInfo() const;
    winrt::float2 OffsetsVelocity() const;
    UINT PointerId() const;
#pragma endregion

private:
    tracker_ref<winrt::ScrollingPresenter> m_scrollingPresenter{ this };
};
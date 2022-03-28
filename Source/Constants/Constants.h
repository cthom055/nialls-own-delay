#pragma once

namespace ModDelay
{
    namespace SharedConstants
    {
        constexpr int maxNumChannels = 2;
        constexpr int maxNumParameters = 12;
        constexpr int maxNumParameterGroups = 1;
        constexpr int maxNumParameterIDs = maxNumParameters * maxNumParameterGroups;
        constexpr int maxNumParameterTuples = maxNumParameterIDs * maxNumParameterGroups;

        static constexpr auto smoothedValueRamp = 0.05f;
        static constexpr auto delayTimeSmoothedValueRamp = 0.25f;
    } // namespace SharedConstants

    namespace DelayConstants
    {
        static constexpr auto maximumDelayInSeconds = 1.0f;
        static constexpr auto maximumDelaySampleRate = 192000.0f;
    } // namespace DelayConstants

    namespace FilterConstants
    {
        constexpr auto maximumCutoffFrequency = 20000.0f;
        constexpr auto maximumResonance = 0.99f;
    } // namespace FilterConstants

    namespace STFTConstants
    {
        static constexpr auto fftOrder = 11;
        static constexpr auto fftSize = 1 << fftOrder;
        static constexpr auto overlap = 2;
        static constexpr auto hopSize = fftSize / overlap;
    } // namespace STFTConstants

    namespace ModulationConstants
    {
        static constexpr auto maximumModulationDepth = 1.0f;
        static constexpr auto maximumModulationRate = 5.0f;
        static constexpr auto maximumModDelayInSeconds = 0.25f;
    } // namespace ModulationConstants

    namespace FDNConstants
    {
        static constexpr auto fdnSize = 16;
        static constexpr auto maximumPreDelayInSeconds = 0.25f;
        static float          lfoRates[] = { 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1.0f, 1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f };
        static float          exponentialDelayTimes[] = { 0.01f, 0.0128083f, 0.0164052f, 0.0210122f, 0.026913f, 0.034471f, 0.0441513f, 0.0565503f, 0.0724311f, 0.0927718f, 0.118825f, 0.152194f, 0.194934f, 0.249677f, 0.319793f, 0.4096f };
    } // namespace FDNConstants
}

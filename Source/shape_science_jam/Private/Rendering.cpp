// Fill out your copyright notice in the Description page of Project Settings.


#include "Rendering.h"

void URendering::SetViewMode(EViewModeIndex ViewMode) {
	ApplyViewMode(ViewMode, false, GEngine->GameViewport->EngineShowFlags);
	GEngine->GameViewport->ViewModeIndex = ViewMode;
}

void URendering::DisableAdvancedEngineFeatures() {
	auto& F = GEngine->GameViewport->EngineShowFlags;
	F.PostProcessing = 1;
	F.Bloom = 0;
	F.LocalExposure = 0;
	F.AntiAliasing = 1;
	F.TemporalAA = 0;
	F.AmbientCubemap = 0;
	F.EyeAdaptation = 0;
	F.GlobalIllumination = 0;
	F.Vignette = 0;
    F.AmbientOcclusion = 0;
    F.Decals = 0;
    F.OnScreenDebug = 0;
    F.VisualizeNanite = 0;
    F.VisualizeLumen = 0;
    F.VisualizeSubstrate = 0;
    F.VisualizeGroom = 0;
    F.VisualizeVirtualShadowMap = 0;
    F.PointLights = 0;
    F.SpotLights = 0;
    F.RectLights = 0;
    F.DepthOfField = 0;
    F.MotionBlur = 0;
    F.CameraInterpolation = 0;
    F.ToneCurve = 0;
    F.SeparateTranslucency = 1;
    F.ScreenPercentage = 0;
    F.ReflectionEnvironment = 0;
    F.Specular = 0;
    F.ScreenSpaceReflections = 0;
    F.LumenReflections = 0;
    F.ContactShadows = 0;
    F.RayTracedDistanceFieldShadows = 0;
    F.CapsuleShadows = 0;
    F.VolumetricLightmap = 0;
    F.IndirectLightingCache = 0;
    F.TexturedLightProfiles = 0;
    F.LightFunctions = 0;
    F.InstancedStaticMeshes = 0;
    F.InstancedFoliage = 0;
    F.InstancedGrass = 0;
    F.DynamicShadows = 0;
    F.Particles = 0;
    F.SkeletalMeshes = 0;
    F.Translucency = 1;
    F.LOD = 1;
    F.Lighting = 0;
    F.DeferredLighting = 0;
    F.StaticMeshes = 0;
    F.Landscape = 0;
    F.Fog = 0;
    F.Game = 1;
    F.BSP = 0;
    F.LightShafts = 0;
    F.Atmosphere = 0;
    F.TextRender = 1;
    F.Rendering = 1;
    F.HMDDistortion = 0;
    F.StereoRendering = 0;
    F.DistanceCulledPrimitives = 0;
    F.SkyLighting = 0;
    F.Paper2DSprites = 1;
    F.ScreenSpaceAO = 0;
    F.DistanceFieldAO = 0;
    F.LumenGlobalIllumination = 0;
    F.VolumetricFog = 0;
    F.WidgetComponents = 0;
    F.MediaPlanes = 0;
    F.PathTracing = 0;
    F.VisualizeCalibrationColor = 0;
    F.VisualizeCalibrationGrayscale = 0;
    F.VisualizeCalibrationCustom = 0;
    F.LumenScreenTraces = 0;
    F.LumenDetailTraces = 0;
    F.LumenGlobalTraces = 0;
    F.LumenFarFieldTraces = 0;
    F.LumenSecondaryBounces = 0;
    F.LumenShortRangeAmbientOcclusion = 0;
    F.NaniteMeshes = 0;
    F.NaniteStreamingGeometry = 0;
    F.ShaderPrint = 0;
}
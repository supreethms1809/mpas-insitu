set(vtkFiltersHybrid_HEADERS_LOADED 1)
set(vtkFiltersHybrid_HEADERS "vtkBSplineTransform;vtkDepthSortPolyData;vtkDSPFilterDefinition;vtkDSPFilterGroup;vtkEarthSource;vtkFacetReader;vtkGreedyTerrainDecimation;vtkGridTransform;vtkImageToPolyDataFilter;vtkImplicitModeller;vtkPCAAnalysisFilter;vtkPolyDataSilhouette;vtkProcrustesAlignmentFilter;vtkProjectedTerrainPath;vtkRenderLargeImage;vtkTemporalDataSetCache;vtkTemporalFractal;vtkTemporalInterpolator;vtkTemporalShiftScale;vtkTemporalSnapToTimeStep;vtkTransformToGrid;vtkWeightedTransformFilter")

foreach(header ${vtkFiltersHybrid_HEADERS})
  set(vtkFiltersHybrid_HEADER_${header}_EXISTS 1)
endforeach()





set(vtkFiltersParallelStatistics_HEADERS_LOADED 1)
set(vtkFiltersParallelStatistics_HEADERS "vtkPAutoCorrelativeStatistics;vtkPContingencyStatistics;vtkPCorrelativeStatistics;vtkPDescriptiveStatistics;vtkPKMeansStatistics;vtkPMultiCorrelativeStatistics;vtkPOrderStatistics;vtkPPCAStatistics;vtkPBivariateLinearTableThreshold")

foreach(header ${vtkFiltersParallelStatistics_HEADERS})
  set(vtkFiltersParallelStatistics_HEADER_${header}_EXISTS 1)
endforeach()





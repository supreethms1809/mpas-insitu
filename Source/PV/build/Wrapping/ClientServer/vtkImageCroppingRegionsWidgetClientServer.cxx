// ClientServer wrapper for vtkImageCroppingRegionsWidget object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkImageCroppingRegionsWidget.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkImageCroppingRegionsWidgetClientServerNewCommand(void* /*ctx*/)
{
  return vtkImageCroppingRegionsWidget::New();
}


int VTK_EXPORT vtkImageCroppingRegionsWidgetCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkImageCroppingRegionsWidget *op = vtkImageCroppingRegionsWidget::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkImageCroppingRegionsWidget.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageCroppingRegionsWidget  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetClassName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetClassName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsA",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsA(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NewInstance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageCroppingRegionsWidget  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SafeDownCast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObject  *temp0;
    vtkImageCroppingRegionsWidget  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PlaceWidget",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->PlaceWidget(temp0);
      return 1;
      }
    }
  if (!strcmp("SetEnabled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnabled(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPlanePositions",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetPlanePositions();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPlanePositions",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->SetPlanePositions(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPlanePositions",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->SetPlanePositions(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPlanePositions",method) && msg.GetNumberOfArguments(0) == 8)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    double   temp4;
    double   temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->SetPlanePositions(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetCroppingRegionFlags",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCroppingRegionFlags(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCroppingRegionFlags",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCroppingRegionFlags();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSliceOrientation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSliceOrientation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSliceOrientation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSliceOrientation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetSliceOrientationToXY",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSliceOrientationToXY();
      return 1;
      }
    }
  if (!strcmp("SetSliceOrientationToYZ",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSliceOrientationToYZ();
      return 1;
      }
    }
  if (!strcmp("SetSliceOrientationToXZ",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSliceOrientationToXZ();
      return 1;
      }
    }
  if (!strcmp("SetSlice",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSlice(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSlice",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSlice();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLine1Color",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetLine1Color(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetLine1Color",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetLine1Color(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLine1Color",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetLine1Color(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLine2Color",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetLine2Color(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetLine2Color",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetLine2Color(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLine2Color",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetLine2Color(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLine3Color",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetLine3Color(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetLine3Color",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetLine3Color(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLine3Color",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetLine3Color(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLine4Color",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetLine4Color(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetLine4Color",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetLine4Color(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLine4Color",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetLine4Color(temp0);
      return 1;
      }
    }
  if (!strcmp("SetVolumeMapper",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkVolumeMapper  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkVolumeMapper"))
      {
      op->SetVolumeMapper(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVolumeMapper",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkVolumeMapper  *temp20;
      {
      temp20 = (op)->GetVolumeMapper();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdateAccordingToInput",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdateAccordingToInput();
      return 1;
      }
    }
  if (!strcmp("MoveHorizontalLine",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MoveHorizontalLine();
      return 1;
      }
    }
  if (!strcmp("MoveVerticalLine",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MoveVerticalLine();
      return 1;
      }
    }
  if (!strcmp("MoveIntersectingLines",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MoveIntersectingLines();
      return 1;
      }
    }
  if (!strcmp("UpdateCursorIcon",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdateCursorIcon();
      return 1;
      }
    }
  if (!strcmp("OnButtonPress",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnButtonPress();
      return 1;
      }
    }
  if (!strcmp("OnButtonRelease",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnButtonRelease();
      return 1;
      }
    }
  if (!strcmp("OnMouseMove",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMouseMove();
      return 1;
      }
    }

  {
    const char* commandName = "vtk3DWidget";
    if (arlu->HasCommandFunction(commandName) &&
        arlu->CallCommandFunction(commandName, op, method, msg, resultStream)) { return 1; }
  }
  if(resultStream.GetNumberOfMessages() > 0 &&
     resultStream.GetCommand(0) == vtkClientServerStream::Error &&
     resultStream.GetNumberOfArguments(0) > 1)
    {
    /* A superclass wrapper prepared a special message. */
    return 0;
    }
  vtkOStrStreamWrapper vtkmsg;
  vtkmsg << "Object type: vtkImageCroppingRegionsWidget, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkImageCroppingRegionsWidget_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkImageCroppingRegionsWidget", vtkImageCroppingRegionsWidgetClientServerNewCommand);
    csi->AddCommandFunction("vtkImageCroppingRegionsWidget", vtkImageCroppingRegionsWidgetCommand);
    }
}

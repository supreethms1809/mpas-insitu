// ClientServer wrapper for vtkAbstractWidget object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkAbstractWidget.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkAbstractWidgetCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkAbstractWidget *op = vtkAbstractWidget::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkAbstractWidget.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
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
    vtkAbstractWidget  *temp20;
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
    vtkAbstractWidget  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetProcessEvents",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetProcessEvents(temp0);
      return 1;
      }
    }
  if (!strcmp("GetProcessEventsMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetProcessEventsMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProcessEventsMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetProcessEventsMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProcessEvents",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetProcessEvents();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ProcessEventsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ProcessEventsOn();
      return 1;
      }
    }
  if (!strcmp("ProcessEventsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ProcessEventsOff();
      return 1;
      }
    }
  if (!strcmp("GetEventTranslator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkWidgetEventTranslator  *temp20;
      {
      temp20 = (op)->GetEventTranslator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CreateDefaultRepresentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CreateDefaultRepresentation();
      return 1;
      }
    }
  if (!strcmp("Render",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Render();
      return 1;
      }
    }
  if (!strcmp("SetParent",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractWidget  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractWidget"))
      {
      op->SetParent(temp0);
      return 1;
      }
    }
  if (!strcmp("GetParent",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractWidget  *temp20;
      {
      temp20 = (op)->GetParent();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRepresentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkWidgetRepresentation  *temp20;
      {
      temp20 = (op)->GetRepresentation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetManagesCursor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetManagesCursor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetManagesCursor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetManagesCursor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ManagesCursorOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ManagesCursorOn();
      return 1;
      }
    }
  if (!strcmp("ManagesCursorOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ManagesCursorOff();
      return 1;
      }
    }
  if (!strcmp("SetPriority",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPriority(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkInteractorObserver";
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
  vtkmsg << "Object type: vtkAbstractWidget, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkAbstractWidget_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkAbstractWidget", vtkAbstractWidgetCommand);
    }
}
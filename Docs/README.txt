README.please to get started with mpas/catalyst/cinema.

On the desktop you will find five items.

1) README.sh is a script that starts the google chrome web browser.

 * the homepage tabs include documentation and a toy cinema database

 * NOTE: the script starts the google chrome web browser with looser
 security settings!

   We do this so that you can simply File->Open a cinema html file and
 visualize results in the browser. Alternatively you can run a web i
 server. To start a cinema web server simply: 
    cd ~/Desktop/Runs/Viewers/minimal_viewer
    python -m SimpleHTTPServer &
    browser to localhost:8000

2) Docs has documentation on MPAS, Catalyst, Cinema and this VM.

3) Data has a sample cinema stores, and the low resolution netcdf data 
 that mpas ocean starts with. Links to download higher res versions
 here too.

4) Source has the source and build directories for ParaView, MPAS,
 MPAS's dependencies, and two cinema viewers.

5) Runs has directories in it that are prepared for you to do sample 
 runs in and view the results.

  - Run1 is setup as a MPAS->Catalyst solution that runs mpas_ocean and
   uses Catalyst to create VTK files that can be visualized with ParaView.

    To try it, cd into the directory and run the runmpas.sh script. This
   runs the simulation and tells it to extract results as defined in the
   mpas.py script.

    After the simulation completes, start ParaVew, open 
   File->Recent Files pick "X_Y_ZNLAYER-dual_220_0.vtk" to see one.
    
    To clean up run cleanme.sh.

  - Run2 is setup as another MPAS->Catalyst solution. This one runs
   mpas_ocean too but it produces Cinema stores instead that can be 
   visualized with a cinema viewer.
  
  Note that Run1 and Run2 only differ in the mpas.py script that we 
  recorded with ParaView's Coprocessing->Export State dialog. 

  - RunSetup is a clean starting point for setting up your own runs.

    To use it, copy the directory somewhere else, cd there and replace 
   the mpas.py script with a different catalyst python script.

    To generate the script, open one of the VTK files produced with Run1i
   in ParaView, setup your visualization as you like, and then open
   CoProcessing->Export State.

    This brings up the dialog where (on the third page) you can select
   "Output to Cinema" to make your own catalyst python scripts.

  - Viewers/qtviewer is a cinema store viewer for the desktop.

    The easiest way to use it is just typing "cview" (an 'alias' in ~/bin).

  - Viewers/minimal_viewer is a cinema store viewer for the web.

    It is preconfigured to open one of the toy cinema stores. To make it
   open Run2's store produced, make the "data" symbolic link point to:
 
     /home/mpas/Desktop/Runs/Run2/cinema/image 

    instead of:

      /home/mpas/Desktop/Data/CinemaStores/two_views initially)

Enjoy

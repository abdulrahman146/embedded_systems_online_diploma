##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Lecture_Quiz
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=F:/C_workspace/C_workspace
ProjectPath            :=F:/C_workspace/C_workspace/Lecture_Quiz
IntermediateDirectory  :=../build-$(ConfigurationName)/Lecture_Quiz
OutDir                 :=../build-$(ConfigurationName)/Lecture_Quiz
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=hp
Date                   :=19/01/2021
CodeLitePath           :="C:/Program Files (x86)/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files (x86)\CodeLite
Objects0=../build-$(ConfigurationName)/Lecture_Quiz/main.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Lecture_Quiz/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Lecture_Quiz" mkdir "..\build-$(ConfigurationName)\Lecture_Quiz"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Lecture_Quiz" mkdir "..\build-$(ConfigurationName)\Lecture_Quiz"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Lecture_Quiz/.d:
	@if not exist "..\build-$(ConfigurationName)\Lecture_Quiz" mkdir "..\build-$(ConfigurationName)\Lecture_Quiz"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Lecture_Quiz/main.c$(ObjectSuffix): main.c ../build-$(ConfigurationName)/Lecture_Quiz/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "F:/C_workspace/C_workspace/Lecture_Quiz/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Lecture_Quiz/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Lecture_Quiz/main.c$(ObjectSuffix) -MF../build-$(ConfigurationName)/Lecture_Quiz/main.c$(DependSuffix) -MM main.c

../build-$(ConfigurationName)/Lecture_Quiz/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Lecture_Quiz/main.c$(PreprocessSuffix) main.c


-include ../build-$(ConfigurationName)/Lecture_Quiz//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



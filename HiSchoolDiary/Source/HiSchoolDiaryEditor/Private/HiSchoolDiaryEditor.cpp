
#include "HiSchoolDiaryEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(FHiSchoolDiaryEditorModule, HiSchoolDiaryEditor);

DEFINE_LOG_CATEGORY(HiSchoolDiaryEditor)

#define LOCTEXT_NAMESPACE "HiSchoolDiaryEditor"

void FHiSchoolDiaryEditorModule::StartupModule()
{
    UE_LOG(HiSchoolDiaryEditor, Warning, TEXT("HiSchoolDiaryEditor: Log Started"));
}

void FHiSchoolDiaryEditorModule::ShutdownModule()
{
    UE_LOG(HiSchoolDiaryEditor, Warning, TEXT("HiSchoolDiaryEditor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE
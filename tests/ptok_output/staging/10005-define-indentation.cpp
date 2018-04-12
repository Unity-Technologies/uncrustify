Line [Parent]            Text
1    [PP_DEFINE]         #
1    [NONE]              define
1    [NONE]              EXTRACTX360ACHIEVEMENT
1    [NONE]              X360Achievement_INTERNAL& mapping = ExtractMonoObjectData<X360Achievement_INTERNAL>(self); /*huh?*/
1    [NONE]              \
2    [NONE]              const XACHIEVEMENT_DETAILS* achievement = xenon::Achievements::GetDetails(mapping.m_index);
2    [NONE]              
/*
 *
 * Copyright 2010 Samsung Electronics S.LSI Co. LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * @file       NAM_OSAL_Library.h
 * @brief
 * @author     SeungBeom Kim (sbcrux.kim@samsung.com)
 * @version    1.0
 * @history
 *    2010.7.15 : Create
 */

#ifndef NAM_OSAL_LIBRARY
#define NAM_OSAL_LIBRARY

#include "OMX_Types.h"


#ifdef __cplusplus
extern "C" {
#endif

void *NAM_OSAL_dlopen(const char *filename, int flag);
void *NAM_OSAL_dlsym(void *handle, const char *symbol);
int   NAM_OSAL_dlclose(void *handle);
const char *NAM_OSAL_dlerror(void);

#ifdef __cplusplus
}
#endif

#endif

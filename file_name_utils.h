/* -*- Mode: C; tab-width: 4; c-basic-offset: 4; indent-tabs-mode: nil -*- */

/**
 * @copyright 2013 Filipe David Manana  <fdmanana@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 **/

#ifndef _FILE_NAME_UTILS_H
#define _FILE_NAME_UTILS_H

#ifdef __cplusplus
extern "C" {
#endif

    char *file_basename(const char *path);

    char *tmp_file_path(const char *tmp_dir, const char *prefix);


#ifdef __cplusplus
}
#endif

#endif

/*
 *
 * Copyright (c) 2018 Nest Labs, Inc.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef __wpantund__SpinelNCPTaskJoinerCommissioning__
#define __wpantund__SpinelNCPTaskJoinerCommissioning__

#include "SpinelNCPTask.h"
#include "SpinelNCPInstance.h"

using namespace nl;
using namespace nl::wpantund;

namespace nl {
namespace wpantund {

class SpinelNCPTaskJoinerCommissioning : public SpinelNCPTask
{
public:
	SpinelNCPTaskJoinerCommissioning(
		SpinelNCPInstance* instance,
		CallbackWithStatusArg1 cb,
		bool action,
		const char *psk,
		const char *provisioning_url
	);
	virtual int vprocess_event(int event, va_list args);
	virtual void finish(int status, const boost::any& value = boost::any());

private:
	bool 		mAction;
	std::string	mPsk;
	std::string	mProvisioningUrl;
	NCPState	mLastState;
};

}; // namespace wpantund
}; // namespace nl


#endif /* defined(__wpantund__SpinelNCPTaskJoinerCommissioning__) */

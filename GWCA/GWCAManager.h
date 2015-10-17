#pragma once

namespace GWAPI {

	class GWCAManager {
		friend class GWAPIMgr;

	public:

	protected:
		GWCAManager(GWAPIMgr& api) : api_(api) {}

		inline GWAPIMgr& api() { return api_; }

	private:
		GWAPIMgr& api_;
	};
}

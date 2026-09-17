class Solution {
	public int numberOfSubstrings(String s) {
		int n = s.length();
		int[] nextZero = new int[n + 1];

		nextZero[n] = n;

		for (int i = n - 1; i >= 0; --i) {
			if (s.charAt(i) == '0')
				nextZero[i] = i;
			else
				nextZero[i] = nextZero[i + 1];
		}

		int ans = 0;

		for (int i = 0; i < n; ++i) {
			int zeroPos = nextZero[i];

			// Substrings containing no zero.
			ans += zeroPos - i;

			int zeros = 0;
			int pos = zeroPos;

			while (pos < n) {
				++zeros;

				if ((long) zeros * zeros > n - i)
					break;

				int next = nextZero[pos + 1];

				int ones = pos - i + 1 - zeros;

				int required = zeros * zeros - ones;

				if (required < 0)
					required = 0;

				int firstValidEnd = pos + required;

				if (firstValidEnd < next)
					ans += next - firstValidEnd;

				pos = next;
			}
		}

		return ans;
	}
}
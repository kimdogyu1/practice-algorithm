package sort1;

import java.util.*;

public class Collec_Sort {
	public static class Rec {
		private String sub;
		private int score;

		public Rec(String sub, int sco) {
			this.sub = sub;
			this.score = sco;
		}

		public String getSub() {
			return sub;
		}

		public int getScore() {
			return score;
		}
	}

	public static void main(String[] args) {
		List<Rec> rcc = getRecords();
		rcc.sort(new LenAscCompare());
		Iterator<Rec> itr = rcc.iterator();
		while (itr.hasNext()) {
			System.out.println(itr.next().getSub());
		}
	}

	public static List<Rec> getRecords() {
		List<Rec> rc = new ArrayList<Rec>();
		Rec r1 = new Rec("practice", 0);
		rc.add(r1);
		Rec r2 = new Rec("draw", 0);
		rc.add(r2);
		Rec r3 = new Rec("current", 0);
		rc.add(r3);
		Rec r4 = new Rec("bye", 0);
		rc.add(r4);
		return rc;
	}

	static class LenAscCompare implements Comparator<Rec> {
		@Override
		public int compare(Rec arg0, Rec arg1) {
			return compareable(arg0, arg1);
		}

		public int compareable(Rec arg0, Rec arg1) {
			String str1 = arg0.getSub();
			String str2 = arg1.getSub();
			if (str1.length() <= str2.length())
				return -1;
			else
				return 1;
		}
	}
}

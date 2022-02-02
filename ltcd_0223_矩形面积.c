int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
	//int AX=(ax1<bx1?bx1:ax1);
	int AY = (ay2 < by2 ? ay2 : by2);
	int BX = (ax1 < bx1 ? bx1 : ax1);
	int BY = (ay1 < by1 ? by1 : ay1);
	int CX = (ax2 < bx2 ? ax2 : bx2);
	//int CY=(ay1<by1?by1:ay1);
	int arrowCOL = AY - BY;
	int arrowROW = CX - BX;
	int AplusB = ((ax2 - ax1) * (ay2 - ay1)) + ((by2 - by1) * (bx2 - bx1));
	if ((arrowCOL > 0) && (arrowROW > 0))
		return -arrowCOL * arrowROW + AplusB;
	else
		return AplusB;
}
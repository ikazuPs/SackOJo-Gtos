
//CREDIT SKYDEV/ADIP
else if (((PlayerInfo*)(peer->data))->cloth_back == 240) {
using namespace std::chrono;
std::ifstream ifsz("save/gemdb/_" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
std::string content((std::istreambuf_iterator<char>(ifsz)), (std::istreambuf_iterator<char>()));
int gembux = atoi(content.c_str());
if (((PlayerInfo*)(peer->data))->lastSACK + 469 < (duration_cast<milliseconds>(system_clock::now().time_since_epoch())).count()) {
	((PlayerInfo*)(peer->data))->lastSACK = (duration_cast<milliseconds>(system_clock::now().time_since_epoch())).count();
	//Fix Spam Drop
	if (pMov->YSpeed == 0 && pMov->XSpeed == 0) break; //0 Speed Fix
	if (pData->currentWorld == "EXIT") break; //fix world
	if (gembux < 1); //Fix Minus
	else {
		auto xx = pData->x;
		auto yy = pData->y;
		DropItem(world, peer, -1, xx, yy, 112, 1, 0); //gtos variable fix
		int ten = 1;
		int fingembux = gembux -= ten;
		ofstream myfile;
		myfile.open("save/gemdb/_" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");//openign players gemdb
		myfile << fingembux;
		myfile.close();
		Player::OnSetBux(peer, fingembux, 0);//settings the players gem

	}
}
else continue;
											}
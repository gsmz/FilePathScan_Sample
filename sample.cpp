#include <iostream>
#include <vector>
#include <filesystem>

using namespace std;

int main(){
	vector< string > arrayFilePath;

	// �J�����g�f�B���N�g���̃t�@�C���p�X���擾��vecFiles�ɒǉ����Ă���
	for ( tr2::sys::directory_iterator itr = ("."), end ; itr != end ; ++itr )
	{
		arrayFilePath.push_back( itr->path() );
	}

	// �t�@�C���p�X�̗�
	for ( auto filepath : arrayFilePath )
	{
		cout << filepath << endl;
	}
	return 0;
}
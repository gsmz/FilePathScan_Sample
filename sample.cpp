#include <iostream>
#include <vector>
#include <filesystem>

using namespace std;

int main(){
	vector< string > arrayFilePath;

	// カレントディレクトリのファイルパスを取得しvecFilesに追加していく
	for ( tr2::sys::directory_iterator itr = ("."), end ; itr != end ; ++itr )
	{
		arrayFilePath.push_back( itr->path() );
	}

	// ファイルパスの列挙
	for ( auto filepath : arrayFilePath )
	{
		cout << filepath << endl;
	}
	return 0;
}
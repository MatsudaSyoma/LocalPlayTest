# プロジェクトの環境構築

## 以下のURLの通り行う
1.https://dev.epicgames.com/documentation/ja-jp/unreal-engine/downloading-source-code-in-unreal-engine

2.https://dev.epicgames.com/documentation/ja-jp/unreal-engine/building-unreal-engine-from-source?application_version=5.3

## Visual Studio 2022のインストール
**Unreal Engineのプロジェクトを開く前に**Visual Studio InstallerでVisual Studio 2022のインストール・変更を選択し、以下の項目にチェックを入れます。

### ・ワークロード

	.NET デスクトップ開発
	C++ によるデスクトップ開発
	ユニバーサル Windows プラットフォーム開発
	C++ によるゲーム開発

### ・個別のコンポーネント

	C++ プロファイリング ツール
	C++ AddressSanitizer
	Windows 10 SDK (10.0.18362 以降であれば Windows 11 SDK でもOK)
	Unreal Engine インストーラー
	.NET 6.0 ランタイム（サポート対象外）
	MSVC v143 – VS 2022 C++ x64/86 ビルドツール（v14.36-17.6）

## 起動

**PixelStreamingClient.uproject**を実行し、上部にある ツール/Visual Studioを更新 を行った後、Visual Studioを起動する。

# 主要ファイル

### 

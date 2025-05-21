# プロジェクトの環境構築

## 手順

以下のリンクを参考にして、プロジェクトのセットアップを行ってください。

1. [Unreal Engine ソースコードのダウンロード](https://dev.epicgames.com/documentation/ja-jp/unreal-engine/downloading-source-code-in-unreal-engine)
2. [Unreal Engine のビルド手順（バージョン5.3）](https://dev.epicgames.com/documentation/ja-jp/unreal-engine/building-unreal-engine-from-source?application_version=5.3)

---

## Visual Studio 2022 のインストール

**Unreal Engine プロジェクトを開く前に、Visual Studio 2022 をインストールまたは変更**してください。Visual Studio Installer を使って、以下の項目を選択します。

### 必須のワークロード

- .NET デスクトップ開発
- C++ によるデスクトップ開発
- ユニバーサル Windows プラットフォーム開発
- C++ によるゲーム開発

### 必須の個別コンポーネント

- C++ プロファイリング ツール
- C++ AddressSanitizer
- Windows 10 SDK (10.0.18362 以降、Windows 11 SDK でも可)
- Unreal Engine インストーラー
- .NET 6.0 ランタイム（サポート対象外）
- MSVC v143 – VS 2022 C++ x64/86 ビルドツール（v14.36-17.6）

---

## プロジェクトの起動

1. **PixelStreamingClient.uproject** を実行します。
2. 上部メニューから「ツール」→「Visual Studio を更新」を選択します。
3. その後、Visual Studio を起動します。

---

# 主要ファイル

以下のファイルは、プロジェクトの中で重要な役割を果たしています。

### `CPP_MyPlayerController.cpp`

- プレイヤーの操作（入力）を取得し、保存するクラス。

### `CPP_MyCharacter.cpp`

- プレイヤーのカメラとマウスカーソルの判定を管理するクラス。

### `CPP_MyGameInstance.cpp`

- プレイヤーのスポーン処理と、WebSocket のメッセージ受信を担当するクラス。


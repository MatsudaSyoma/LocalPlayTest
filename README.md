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
- C++ によるゲーム開発
- WinUI アプリケーション開発
![Setup_1](https://github.com/user-attachments/assets/372a80b0-e6c7-47d1-a12a-008f764469e9)

**C++ によるゲーム開発 のドロップダウン内の以下三点を確認**

- C++ プロファイリング ツール
- C++ AddressSanitizer
- Unreal Engine インストーラー

  ![Setup_2](https://github.com/user-attachments/assets/71afe5f6-a7e9-48ee-8a45-767d0ff2161d)


### 必須の個別コンポーネント

- .NET 6.0 ランタイム（サポート対象外）
- MSVC v143 – VS 2022 C++ x64/86 ビルドツール（v14.36-17.6）

![Setup_3](https://github.com/user-attachments/assets/90095736-693b-4f4e-9341-8d11f24a0c0d)

![Setup_4](https://github.com/user-attachments/assets/cabfb2de-4027-435a-af44-021a88813695)

---

## プロジェクトの起動

1. **PixelStreamingClient.uproject** を実行します。
2. 上部メニューから「ツール」→「Visual Studio を更新」を選択します。
3. その後、Visual Studio を起動します。

 ![Setup_5](https://github.com/user-attachments/assets/9bb0d1ae-1478-4983-8641-05a09731691f)


---

## プロジェクトのビルド

1. [このURL](https://github.com/MatsudaSyoma/LocalMultiPlayerFrontEnd)のリポジトリをクローンします。
2. メニューから「プラットフォーム」→「Windows」→「プロジェクトをパッケージ化」を選択します。
3. 上記リポジトリの中のUEFileを選択し、ビルドします。

![Setup_6](https://github.com/user-attachments/assets/3ae4871f-c02a-4570-92f8-3e27a11ad0f8)
![Setup_7](https://github.com/user-attachments/assets/c41d47e6-f558-4494-8fda-519eda65b894)

---

# 主要ファイル

以下のファイルは、プロジェクトの中で重要な役割を果たしています。

### `CPP_MyPlayerController.cpp`

- プレイヤーの操作（入力）を取得し、保存するクラス。

### `CPP_MyCharacter.cpp`

- プレイヤーのカメラとマウスカーソルの判定を管理するクラス。

### `CPP_MyGameInstance.cpp`

- プレイヤーのスポーン処理と、WebSocket のメッセージ受信を担当するクラス。


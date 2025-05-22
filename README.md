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

1. **PixelStreamingClient.uproject** を右クリックします。
2. **Generate Visual Studio project files** をクリックし、slnファイルを生成します。
3. slnファイルを起動し、上部のDevelopmentドロップダウンから **Development Editor** を選択します。
4. 右側の **PixelStreamingClient** を右クリックし、上にあるビルドを選択します。
5. ビルドが終わったら、 **PixelStreamingClient.uproject** ファイルを開きます。

![Setup_13](https://github.com/user-attachments/assets/4cb1b0e0-8129-4b60-906e-d1cefccb1c6f)

![Setup_11](https://github.com/user-attachments/assets/23014a44-6240-4cfc-82f2-f1117811145c)

![Setup_12](https://github.com/user-attachments/assets/e185a4f9-0bf8-4d96-a13b-205d81e090a8)

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


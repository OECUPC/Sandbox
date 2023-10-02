# 概要
プログラミングの勉強や制作等で必要なコーディング環境を共有/配布できるようにしたリポジトリ

# 使用方法
## 1. コンテナのビルド
```bash
docker compose build
```

## 2. コンテナの起動
```bash
docker compose up -d
```

## コンテナ内に入る(bash)
```bash
docker compose exec bash
```
※VSCodeの`リモートエクスプローラー`から`coding`を選択して入ることも可能
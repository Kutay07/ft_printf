# ft_printf

42 projesinin bir parçası olan `printf` fonksiyonunun C dilinde yeniden implementasyonu.

## 📋 Açıklama

Bu proje, C standart kütüphanesindeki `printf` fonksiyonunu sıfırdan yazmayı amaçlar. Variadic fonksiyonlar ve format specifier'ları kullanarak esnek bir çıktı fonksiyonu sağlar.

## ✨ Desteklenen Format Belirteçleri

| Belirteç | Açıklama |
|----------|----------|
| `%c` | Karakter yazdırır |
| `%s` | String yazdırır |
| `%d` / `%i` | Decimal integer yazdırır |
| `%u` | Unsigned decimal integer yazdırır |
| `%x` | Hexadecimal (küçük harf) yazdırır |
| `%X` | Hexadecimal (büyük harf) yazdırır |
| `%p` | Pointer adresini yazdırır |
| `%%` | Literal % karakteri yazdırır |

## 🚀 Kullanım

```bash
# Derleme
make

# Temizlik
make clean

# Tam temizlik
make fclean

# Yeniden derleme
make re
```

## 📁 Dosya Yapısı

- `ft_printf.c` - Ana printf implementasyonu
- `ft_printf_utils.c` - Yardımcı fonksiyonlar
- `ft_printf.h` - Header dosyası
- `Makefile` - Derleme kuralları

## 👤 Yazar

**kbatur** - 42 Öğrencisi
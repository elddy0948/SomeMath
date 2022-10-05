# Vector Math

## What I implemented

### 벡터의 덧셈

```cpp
Vec3 Vec3::operator+(const Vec3 vec) const
{
 return Vec3(x + vec.x, y + vec.y, z + vec.z);
}
```

### 벡터의 뺄셈

```cpp
Vec3 Vec3::operator-(const Vec3 vec) const
{
 return Vec3(x - vec.x, y - vec.y, z - vec.z);
}
```

### 스칼라 곱셈

```cpp
Vec3 Vec3::operator*(const int s) const
{
 return Vec3(x * s, y * s, z * s);
}

Vec3 operator*(const int s, const Vec3& vec)
{
 return vec * s;
}
```

### 벡터의 크기

### Normalization

### 내적

### 외적

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

```cpp
auto Vec3::Size() const
{
 int vec_square = x * x + y * y + z * z;
 auto vec_size = std::sqrt(vec_square);
 return vec_size;
}
```

### Normalization

```cpp
Vec3 Vec3::Normalize() const
{
 auto vec_size = this->Size();
 return Vec3(x / vec_size, y / vec_size, z / vec_size);
}
```

### 내적

```cpp
auto Vec3::Dot(const Vec3 vec) const
{
 return x * vec.x + y * vec.y + z * vec.z;
}
```

### 외적

```cpp
Vec3 Vec3::Cross(const Vec3 vec) const
{
 return Vec3(y * vec.z - z * vec.y, z * vec.x - x * vec.z, x * vec.y - y * vec.x);
}
```

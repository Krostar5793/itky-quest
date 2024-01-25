'use server';

import { NextRequest, NextResponse } from 'next/server';

const correctUser = process.env.NEXT_BASIC_USER!;
const correctPassword = process.env.NEXT_BASIC_PASSWORD!;

export const config = {
  matcher: ['/:path*', '/index/:path*'],
};

export function middleware(req: NextRequest) {
  const basicAuth = req.headers.get('Authorization');

  if ( basicAuth ) {
    const authValue = basicAuth.split(' ')[1];
    const [user, password] = atob(authValue).split(':');

    if (user === correctUser && password === correctPassword) {
      return NextResponse.next();
    }

    return NextResponse.json(
      { error: 'Invalid credentials' },
      { headers: { 'WWW-Authenticate': 'Basic realm="Secure Area"' }, status: 401 }
    );
  } else {
    return NextResponse.json(
      { error: 'Please enter credentials' },
      { headers: { 'WWW-Authenticate': 'Basic realm="Secure Area"' }, status: 401 }
    );
  }
}

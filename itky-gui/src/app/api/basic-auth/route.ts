import { NextResponse } from 'next/server';

const GET = (): NextResponse => {
  return NextResponse.json(
    { error: 'Basic Auth Required' },
    {
      status: 401,
      headers: { 'WWW-Authenticate': 'Basic realm=\'secure_area\'' },
    },
  );
};

export { GET };
